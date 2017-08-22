/*** R
## Testing the search
test_set <- matrix(c(13, 291, 57, 145, 115, 232, 86, 27, 145, 28, 262, 203, 320, 261, 379, 174, 261, 71, 325, 57), byrow=T, ncol=2)
test_set[, 2] <- 321 - test_set[, 2]
clustertree:::dt_knn(test_set, k = 4L, bkt_size = 1L, prune = TRUE)
clustertree:::dt_knn(test_set, k = 4L, bkt_size = 1L, prune = FALSE)



test_knn <- clustertree:::dt_knn(ts2, k = 40L, bkt_size = 1L, prune = TRUE)


l1_dist <- as.matrix(dist(ts2, method = "manhattan"))
l1_knn_id <- t(apply(l1_dist, 1, order))
l1_knn_dist <- t(apply(l1_dist, 1, sort))

all(test_knn$dist == l1_knn_dist[, 2:41L])
all(test_knn$id == l1_knn_id[, 2:41L])

size <- 50
ts2 <- as.matrix(data.frame(x = rnorm(size), y = rnorm(size)))
invisible(clustertree:::dt_knn(ts2, k = 15L, bkt_size = 5L, prune = TRUE))

## Test for correctness
bkt_sz = 5L
clustertree:::dt_knn(test_set, k = 8L, bkt_size = bkt_sz, prune = TRUE)$dist == dbscan::kNNdist(test_set, k = 8L)
clustertree:::dt_knn(test_set, k = 8L, bkt_size = bkt_sz, prune = TRUE)$id == unname(dbscan::kNN(test_set, k = 8L)$id)


#sapply(seq(1, 140, by = 10), function(i){
  X_n <- as.matrix(iris[c(41, 42, 43, 44, 45, 46, 47, 50, 51), 1:4])
  k <- 2L
  truth <- dbscan::kNN(X_n, k = k)
  all(clustertree:::dt_knn(X_n, k = k, bkt_size = bkt_sz, prune = TRUE)$dist == truth$dist)
  #clustertree:::dt_knn(X_n, k = k, bkt_size = bkt_sz, prune = TRUE)$id == unname(truth$id)
#})


## Benchmarking
size <- 1500
xyz <- as.matrix(data.frame(x = rnorm(size), y = rnorm(size), z = rnorm(size)))
microbenchmark::microbenchmark(invisible(clustertree:::dt_knn(xyz, k = 30L, bkt_size = 30L, prune = FALSE)), times = 15L)
microbenchmark::microbenchmark(invisible(clustertree:::dt_knn(xyz, k = 30L, bkt_size = 30L, prune = TRUE)), times = 15L)
microbenchmark::microbenchmark(invisible(dbscan::kNN(xyz, k = 30L, sort = F, bucketSize = 30L)), times = 15L)

clustertree:::dt_knn(xyz, k = 30L, bkt_size = 30L, prune = TRUE)$dist[, -1] == dbscan::kNNdist(xyz, k = 30L, bucketSize = 30L)
invisible(clustertree:::dt_knn(xyz, k = 30L, bkt_size = 30L, prune = FALSE))

*/

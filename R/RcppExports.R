# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

normalizeIndices <- function(mst) {
    .Call('_clustertree_normalizeIndices', PACKAGE = 'clustertree', mst)
}

mstToCC <- function(mst, dist) {
    .Call('_clustertree_mstToCC', PACKAGE = 'clustertree', mst, dist)
}

mstToHclust <- function(mst_, dist) {
    .Call('_clustertree_mstToHclust', PACKAGE = 'clustertree', mst_, dist)
}

hclustMergeOrder <- function(mst, o) {
    .Call('_clustertree_hclustMergeOrder', PACKAGE = 'clustertree', mst, o)
}

knn_dist <- function(dist_x, k) {
    .Call('_clustertree_knn_dist', PACKAGE = 'clustertree', dist_x, k)
}

knn_dist2 <- function(dist_x, k) {
    .Call('_clustertree_knn_dist2', PACKAGE = 'clustertree', dist_x, k)
}

chooseMetric_int <- function(metric_name, config) {
    .Call('_clustertree_chooseMetric_int', PACKAGE = 'clustertree', metric_name, config)
}

primsCtree <- function(r, r_k, n, alpha, type) {
    .Call('_clustertree_primsCtree', PACKAGE = 'clustertree', r, r_k, n, alpha, type)
}

naive_clustertree <- function(dist_x, r_k, k, alpha, type = 0L) {
    .Call('_clustertree_naive_clustertree', PACKAGE = 'clustertree', dist_x, r_k, k, alpha, type)
}

kd_knn <- function(query_x, tree_ptr, k, priority) {
    .Call('_clustertree_kd_knn', PACKAGE = 'clustertree', query_x, tree_ptr, k, priority)
}

kdtree <- function(x, bkt_size) {
    .Call('_clustertree_kdtree', PACKAGE = 'clustertree', x, bkt_size)
}

kNN_int <- function(x, k, type, bucketSize, splitRule, approx, r_x) {
    .Call('_clustertree_kNN_int', PACKAGE = 'clustertree', x, k, type, bucketSize, splitRule, approx, r_x)
}

mergeHeight <- function(hcl) {
    .Call('_clustertree_mergeHeight', PACKAGE = 'clustertree', hcl)
}

kruskalsMST <- function(dist_x) {
    .Call('_clustertree_kruskalsMST', PACKAGE = 'clustertree', dist_x)
}

primsMST <- function(dist_x) {
    .Call('_clustertree_primsMST', PACKAGE = 'clustertree', dist_x)
}

cut_simplified_hclust <- function(hcl, cl_in, big_n) {
    .Call('_clustertree_cut_simplified_hclust', PACKAGE = 'clustertree', hcl, cl_in, big_n)
}

simplified_hclust <- function(hcl, min_sz) {
    .Call('_clustertree_simplified_hclust', PACKAGE = 'clustertree', hcl, min_sz)
}

vol_nSphere <- function(n, R = 1) {
    .Call('_clustertree_vol_nSphere', PACKAGE = 'clustertree', n, R)
}


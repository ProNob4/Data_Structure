int seg_tree[4 * HEAP_MAX], arr[HEAP_MAX];
void build(int node, int l, int r) {
    if (l == r) seg_tree[node] = arr[l];
    else {
        int mid = (l + r) / 2;
        build(2*node, l, mid);
        build(2*node+1, mid+1, r);
        seg_tree[node] = seg_tree[2*node] + seg_tree[2*node+1];
    }
}

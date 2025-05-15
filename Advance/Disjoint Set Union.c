int parent[HEAP_MAX];
void make_set(int n) {
    for (int i = 0; i < n; i++) parent[i] = i;
}
int find(int x) {
    return parent[x] == x ? x : (parent[x] = find(parent[x]));
}
void union_sets(int a, int b) {
    parent[find(a)] = find(b);
}

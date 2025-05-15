int BIT[HEAP_MAX];
void update(int i, int val) {
    for (; i < HEAP_MAX; i += i & -i) BIT[i] += val;
}
int prefix_sum(int i) {
    int sum = 0;
    for (; i > 0; i -= i & -i) sum += BIT[i];
    return sum;
}

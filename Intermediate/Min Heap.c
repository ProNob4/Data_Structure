#define HEAP_MAX 100
int heap[HEAP_MAX], heap_size = 0;
void heap_insert(int val) {
    int i = ++heap_size;
    while (i > 1 && val < heap[i/2]) {
        heap[i] = heap[i/2];
        i /= 2;
    }
    heap[i] = val;
}

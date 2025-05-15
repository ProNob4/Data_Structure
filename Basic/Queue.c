
#define QUEUE_MAX 100
int queue[QUEUE_MAX], front = 0, rear = 0;
void enqueue(int x) { if (rear < QUEUE_MAX) queue[rear++] = x; }
int dequeue() { return front < rear ? queue[front++] : -1; }

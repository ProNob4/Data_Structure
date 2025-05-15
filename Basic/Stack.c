#define STACK_MAX 100
int stack[STACK_MAX], top = -1;
void push(int x) { if (top < STACK_MAX - 1) stack[++top] = x; }
int pop() { return top >= 0 ? stack[top--] : -1; }

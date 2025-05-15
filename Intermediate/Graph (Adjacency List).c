#define V 5
struct AdjListNode {
    int dest;
    struct AdjListNode* next;
};
struct AdjList {
    struct AdjListNode* head;
};
struct Graph {
    struct AdjList array[V];
};

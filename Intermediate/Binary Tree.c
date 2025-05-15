struct TreeNode {
    int data;
    struct TreeNode *left, *right;
};

struct TreeNode* create_tree_node(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->data = val;
    node->left = node->right = NULL;
    return node;
}

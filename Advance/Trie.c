struct TrieNode {
    struct TrieNode* children[26];
    int is_end;
};

struct TrieNode* create_trie_node() {
    struct TrieNode* node = (struct TrieNode*)malloc(sizeof(struct TrieNode));
    for (int i = 0; i < 26; i++) node->children[i] = NULL;
    node->is_end = 0;
    return node;
}

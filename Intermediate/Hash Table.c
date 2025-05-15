#define HASH_SIZE 10
int hash_table[HASH_SIZE] = {0};
void insert_hash(int key) {
    int index = key % HASH_SIZE;
    while (hash_table[index]) index = (index + 1) % HASH_SIZE;
    hash_table[index] = key;
}

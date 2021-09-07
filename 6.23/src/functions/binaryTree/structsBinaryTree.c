typedef struct binaryNode {
    KEY_TYPE key;

    struct binaryNode *left;
    struct binaryNode *right;
} BINARYNODE;

typedef BINARYNODE* PONT_BINARY;
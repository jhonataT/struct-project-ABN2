PONT_BINARY newBinaryNode(KEY_TYPE key) {
    PONT_BINARY new = (PONT_BINARY)malloc(sizeof(BINARYNODE));
    new->left = NULL;
    new->right = NULL;
    new->key = key;
    return(new);
}

PONT_BINARY startBinaryNode(KEY_TYPE key) {
    return(newBinaryNode(key));
}
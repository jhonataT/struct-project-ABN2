int percorrer(PONT_BINARY treeRoot, int nkeys)
{
    printf("A");
    PONT_BINARY no = treeRoot;

    if (no->left)
    {
        printf("%d <- ", no->key);
        percorrer(no->left, nkeys - 1);
        
    }
    else if(no->right)
    {
        printf("%d -> ", no->key);
        percorrer(no->right, nkeys - 1);
    } 
    return nkeys;
}
int percorrer(PONT_BINARY treeRoot, int nkeys)
{
    PONT_BINARY no = treeRoot;

    printf("%d - ", no->key);
    if (no->left)
    {
        percorrer(no->left, nkeys - 1);
        
    }
    else if(no->right)
    {
        percorrer(no->right, nkeys - 1);
    } 
    return nkeys;
}
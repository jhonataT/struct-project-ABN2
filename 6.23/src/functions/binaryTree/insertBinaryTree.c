PONT_BINARY insertLevelOrder(PONT_BINARY root, int arr[], int i, int n){
    // Base case for recursion
    if (i < n)
    {
        PONT_BINARY temp = startBinaryNode(arr[i]);
        root = temp;
 
        // insert left child
        root->left = insertLevelOrder(root->left, arr, 2 * i + 1, n);
 
        // insert right child
        root->right = insertLevelOrder(root->right, arr, 2 * i + 2, n);
    }
    return root;
}

void inOrder(PONT_BINARY root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->key);
        inOrder(root->right);
    }
}
BOOL showNTree(PONT root){
    if(root == NULL) return false;

    printf("%d(", root->chave);
    PONT p = root->primFilho;
    
    while(p) {
        showNTree(p);
        p = p->proxIrmao;
    }

    printf(")");
    return true;
}
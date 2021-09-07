BOOL showNTree(PONT root, bool isBrother){
    if(root == NULL) return false;

    if(isBrother == false){
        printf("e%d(", root->chave);
    } else {
        printf("d%d(", root->chave);
    }

    PONT p = root->primFilho;
    
    int i = 0;
    while(p) {
        if(i % 2 == 0){
            showNTree(p, false);
        } else {
            showNTree(p, true);
        }
        p = p->proxIrmao;
        ++i;
    }

    printf(")");
    return true;
}
int insert(PONT raiz, KEY_TYPE novaChave, KEY_TYPE chavePai, KEY_TYPE arr[], int index){
    arr[index] = novaChave;
    PONT pai = searchKey(chavePai, raiz);
    if(!pai) return 0;

    PONT filho = criaNovoNo(novaChave);
    PONT p = pai->primFilho;
    if(!p) pai->primFilho = filho;
    else{
        while(p->proxIrmao){
            p = p->proxIrmao;
        }
        p->proxIrmao = filho;
    }

    return index + 1;
}
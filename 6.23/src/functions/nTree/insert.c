BOOL insert(PONT raiz, KEY_TYPE novaChave, KEY_TYPE chavePai){
    PONT pai = searchKey(chavePai, raiz);
    if(!pai) return (false);

    PONT filho = criaNovoNo(novaChave);
    PONT p = pai->primFilho;
    if(!p) pai->primFilho = filho;
    else{
        while(p->proxIrmao){
            p = p->proxIrmao;
        }
        p->proxIrmao = filho;
    }

    return (true);
}
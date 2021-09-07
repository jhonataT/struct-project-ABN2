PONT criaNovoNo(KEY_TYPE ch) {
    PONT novo = (PONT)malloc(sizeof(NO));
    novo->primFilho = NULL;
    novo->proxIrmao = NULL;
    novo->chave = ch;
    return(novo);
}

PONT inicializa(KEY_TYPE ch) {
    return(criaNovoNo(ch));
}
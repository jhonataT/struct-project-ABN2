PONT searchKey(KEY_TYPE ch, PONT raiz)
{
    if (raiz == NULL) return NULL;
    if (raiz->chave == ch) return raiz;
    
    PONT p = raiz->primFilho;
    
    while (p)
    {
        PONT resp = searchKey(ch, p);
        
        if (resp) return resp;
        p = p->proxIrmao;
    }
    return (NULL);
}
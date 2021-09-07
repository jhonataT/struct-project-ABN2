typedef struct no {
    KEY_TYPE chave;

    struct no *primFilho;
    struct no *proxIrmao;
} NO;

typedef NO* PONT;
/*
    Equipe: Jhonata Tenório, Jorge Lucas, Ramon, Vitor Magno. 

    Linguagem C, compilador: GCC.

    Faça um programa que recebe uma árvore n-ária
    ordenada e gera uma árvore binária ordenada
    correspondente a primeira.

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int BOOL;
typedef int KEY_TYPE;

#define true 1
#define false 0

#include "./functions/nTree/structsNTree.c"
#include "./functions/nTree/initNTree.c"
#include "./functions/nTree/busca.c"
#include "./functions/nTree/showNTree.c"
#include "./functions/nTree/insert.c"
#include "./functions/binaryTree/structsBinaryTree.c"
#include "./functions/binaryTree/initBinaryTree.c"
#include "./functions/binaryTree/insertBinaryTree.c"
// #include "./functions/binaryTree/navegacaoBin.c"

int main() {
    PONT r = inicializa(1);
    BOOL verify = insert(r, 2, 1);
    verify = insert(r, 3, 1);
    verify = insert(r, 4, 1);
    verify = insert(r, 5, 2);
    verify = insert(r, 6, 3);
    verify = insert(r, 7, 3);
    verify = insert(r, 8, 3);
    verify = insert(r, 9, 4);
    verify = insert(r, 10, 4);
    verify = insert(r, 11, 10);

    showNTree(r, false);
    printf("\n");
}
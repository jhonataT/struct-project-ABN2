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
#include "./functions/binaryTree/navegacaoBin.c"
#include "./functions/binaryTree/initBinaryTree.c"
#include "./functions/binaryTree/insertBinaryTree.c"

int main() {
    KEY_TYPE arr[11] = {0};

    PONT r = inicializa(1);
    arr[0] = 1;
    int index = 1;
    insert(r, 2, 1, arr, index);
    index += 1;
    insert(r, 3, 1, arr, index);
    index += 1;
    insert(r, 4, 1, arr, index);
    index += 1;
    insert(r, 5, 2, arr, index);
    index += 1;
    insert(r, 6, 3, arr, index);
    index += 1;
    insert(r, 7, 3, arr, index);
    index += 1;
    insert(r, 8, 3, arr, index);
    index += 1;
    insert(r, 9, 4, arr, index);
    index += 1;
    insert(r, 10, 4, arr, index);
    index += 1;
    insert(r, 11, 10, arr, index);

    showNTree(r);
    printf("\n");

    PONT_BINARY root = insertLevelOrder(root, arr, 0, 11);
    inOrder(root);
    printf("\n");
}
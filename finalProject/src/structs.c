/*
    CITY->direction:
    1 cima/esquerda 
    2 baixo/direita 
    3 cima/direita 
    4 baixo/esquerda 
*/

typedef struct {
    int currentChar;
    int direction;  
} CITY;

typedef struct {
    int id;
    char directions[4];
} CAR[100];

typedef struct {
    int red;
    int yellow;
    int green;
} SEMAPHORE;


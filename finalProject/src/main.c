#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>

#include "structs.c"
#include "./functions/printCity.c"
#include "./functions/initCity.c"
#include "./functions/initCars.c"
#include "./functions/setCars.c"

int main() {
    // (0,x)(x,0)(9,x)(x,9) => borders
    int city[28][37];
    CAR cars[100];
    initCity(city);
    initCars(cars);
}
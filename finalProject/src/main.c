#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>

#include "structs.c"
#include "./functions/initCity.c"
#include "./functions/initCars.c"

int main() {
    // (0,x)(x,0)(9,x)(x,9) => borders
    char city[28][37];
    initCity(city);
    CAR cars[100];
    initCars(cars);
}


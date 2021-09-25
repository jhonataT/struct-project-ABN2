#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <unistd.h>
#include <time.h>

#include "structs.c"

#include "./functions/dictionary.c"
#include "./functions/printCity.c"
#include "./functions/initCity.c"
#include "./functions/initCars.c"
#include "./functions/setCars.c"
#include "./functions/initSemaphore.c"
#include "./functions/setCarsDirections.c"

int main() {
    // (0,x)(x,0)(9,x)(x,9) => borders
    CITY cities[28][37];
    CAR cars[100];
    SEMAPHORE semap;
    initCity(cities);
    initSemaphore(&semap);
    initCars(cars);

    int i = 0;
    // while(1){
    //     if(i == 1000) break;
    //     sleep(1);
    //     initCity(cities);
    //     setCars(cars, cities);
    //     ++i;
    // }
}
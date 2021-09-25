int setCars(CAR cars[], int city[][37]){
    srand(time(NULL));

    int i = 0;

    while(i < 100){
        int l = rand() % 28;
        int c = rand() % 37;
        if(city[l][c] ==  '-' || city[l][c] ==  '|'){
            city[l][c] = cars[i]->id*10;
            ++i;
        }
    }
    printCity(city);
}

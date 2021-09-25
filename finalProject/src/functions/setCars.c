int setCars(CAR cars[], CITY cities[][37]){
    srand(time(NULL));

    int i = 0;

    while(i < 100){
        int l = rand() % 28;
        int c = rand() % 37;
        if(cities[l][c].currentChar ==  '-' || cities[l][c].currentChar ==  '|'){
            cities[l][c].currentChar = cars[i]->id*10;
            ++i;
        }
    }
    printCity(cities);
}

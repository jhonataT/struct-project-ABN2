int printCity(CITY cities[][37]){
    system("clear");
    printf("\n\n");
    for(int i = 0; i < 28; i++){
        for(int j = 0; j < 37; j++){
            if(cities[i][j].currentChar % 10 != 0)
                printf("%3c ", cities[i][j].currentChar);
            else 
                printf("%3d ", cities[i][j].currentChar / 10);
        }
        if(i == 27) printf("\n\n");
        printf("\n");
    }
}
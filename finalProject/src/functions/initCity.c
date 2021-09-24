int initCity(char city[][37]){
    printf("\n\n");
    for(int i = 0; i < 28; i++){
        for(int j = 0; j < 37; j++){
            if(i % 3 == 0 && j % 4 == 0) city[i][j] = '+';
            else if(i == 0 || i % 3 == 0) city[i][j] = '-';
            else if(j == 0 || j % 4 == 0) city[i][j] = '|';
            else city[i][j] = '*'; 

            printf("%1c ", city[i][j]);
        }
        if(i == 27) printf("\n\n");
        printf("\n");
    }
}
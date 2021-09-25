int printCity(int city[][37]){
    system("clear");
    printf("\n\n");
    for(int i = 0; i < 28; i++){
        for(int j = 0; j < 37; j++){
            if(city[i][j] % 10 != 0)
                printf("%3c ", city[i][j]);
            else 
                printf("%3d ", city[i][j] / 10);
        }
        if(i == 27) printf("\n\n");
        printf("\n");
    }
}
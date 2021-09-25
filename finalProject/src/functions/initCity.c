int initCity(CITY cities[][37]){
    char name[16] = "ramonbarrosdelim";
    
    int streetIntersection = '+';
    int horizontalStreet = '-';
    int verticalStreet = '|';
    int borderStreet = '#';
    
    int indexLetter = 0;
    for(int i = 0; i < 28; i++){
        for(int j = 0; j < 37; j++){
            if(i % 3 == 0 && j % 4 == 0){
                cities[i][j].currentChar = streetIntersection;
            } else if(i == 0 || i % 3 == 0){
                cities[i][j].currentChar = horizontalStreet;
                // if(indexLetter < 16){
                //     cities[i][j].direction = dictionary(name[indexLetter]);
                //     printf("\n\ndirection%d\n\n", cities[i][j].direction);
                //     ++indexLetter;
                // }
            } else if(j == 0 || j % 4 == 0){
                cities[i][j].currentChar = verticalStreet;
            } else cities[i][j].currentChar = borderStreet;
        }
    }
}

int initCity(int city[][37]){
    int streetIntersection = '+';
    int horizontalStreet = '-';
    int verticalStreet = '|';
    int borderStreet = '#';
    
    for(int i = 0; i < 28; i++){
        for(int j = 0; j < 37; j++){
            if(i % 3 == 0 && j % 4 == 0) city[i][j] = streetIntersection;
            else if(i == 0 || i % 3 == 0) city[i][j] = horizontalStreet;
            else if(j == 0 || j % 4 == 0) city[i][j] = verticalStreet;
            else city[i][j] = borderStreet;
        }
    }
}
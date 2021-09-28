int setColumnStreetDirection(CITY cities[][37], char name[]){
    // Get directions by column number
    int validVerticalStreet = 0;

    for(int j = 0; j < 37; j++){
        if(j > 0 && j < 36 && j % 4 == 0 && validVerticalStreet <= 8){
            ++validVerticalStreet;
        }  

        for(int i = 0; i < 28; i++){
            if(validVerticalStreet <= 0 || j >= 34 || j % 4 != 0){
                // cities[i][j].direction = 0;    
            } else {
                cities[i][j].direction = dictionary(tolower(name[validVerticalStreet - 1 + 8]));
            }
        }
    }


}

int setLineStreetDirection(CITY cities[][37], char name[]){
    // Get directions by line number
    int validHorizontalStreet = 0;

    for(int i = 0; i < 28; i++){
        if(i > 0 && i < 27 && i % 3 == 0 && validHorizontalStreet <= 8){
            ++validHorizontalStreet;
        }  
        for(int j = 0; j < 37; j++){
            if(validHorizontalStreet <= 0 || i >= 25 || i % 3 != 0){
                cities[i][j].direction = 0;    
            } else {
                cities[i][j].direction = dictionary(tolower(name[validHorizontalStreet - 1]));
            }
        }
    }
}

int initCity(CITY cities[][37]){
    char name[16] = "RAMONBARROSDELIM";

    int streetIntersection = '+';
    int horizontalStreet = '-';
    int verticalStreet = '|';
    int borderStreet = '#';
    
    int indexLetter = 0;

    for(int i = 0; i < 28; i++){
        int lineDirection = -1, newDirection = 0;
        
        for(int j = 0; j < 37; j++){
            if(i % 3 == 0 && j % 4 == 0)
                cities[i][j].currentChar = streetIntersection;
            else if(i == 0 || i % 3 == 0)
                cities[i][j].currentChar = horizontalStreet;
            else if(j == 0 || j % 4 == 0)
                cities[i][j].currentChar = verticalStreet;
            else 
                cities[i][j].currentChar = borderStreet;
        }
    }

    setLineStreetDirection(cities, name);
    setColumnStreetDirection(cities, name);
}
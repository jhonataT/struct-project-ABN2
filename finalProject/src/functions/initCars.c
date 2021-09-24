int initCars(CAR cars[]){
    for(int index = 0; index < 100; index++){
        int lastNumber = index % 10;
        cars[index]->id = index;
        if(lastNumber == 0){
            cars[index]->directions[0] = 'c';
            cars[index]->directions[1] = 'd';
            cars[index]->directions[2] = 'b';
            cars[index]->directions[3] = 'e';
        } else if(lastNumber == 1){
            cars[index]->directions[0] = 'c';
            cars[index]->directions[1] = 'e';
            cars[index]->directions[2] = 'b';
            cars[index]->directions[3] = 'd';
        } else if(lastNumber == 2){
            cars[index]->directions[0] = 'c';
            cars[index]->directions[1] = 'd';
            cars[index]->directions[2] = 'b';
            cars[index]->directions[3] = 'e';
        } else if(lastNumber == 3){
            cars[index]->directions[0] = 'b';
            cars[index]->directions[1] = 'e';
            cars[index]->directions[2] = 'c';
            cars[index]->directions[3] = 'd';
        } else if(lastNumber == 4){
            cars[index]->directions[0] = 'b';
            cars[index]->directions[1] = 'd';
            cars[index]->directions[2] = 'c';
            cars[index]->directions[3] = 'e';
        } else if(lastNumber == 5){
            cars[index]->directions[0] = 'e';
            cars[index]->directions[1] = 'b';
            cars[index]->directions[2] = 'd';
            cars[index]->directions[3] = 'c';
        } else if(lastNumber == 6){
            cars[index]->directions[0] = 'd';
            cars[index]->directions[1] = 'b';
            cars[index]->directions[2] = 'e';
            cars[index]->directions[3] = 'c';
        } else if(lastNumber == 7){
            cars[index]->directions[0] = 'e';
            cars[index]->directions[1] = 'c';
            cars[index]->directions[2] = 'd';
            cars[index]->directions[3] = 'b';
        } else if(lastNumber == 8){
            cars[index]->directions[0] = 'd';
            cars[index]->directions[1] = 'b';
            cars[index]->directions[2] = 'e';
            cars[index]->directions[3] = 'c';
        } else if(lastNumber == 9){
            cars[index]->directions[0] = 'c';
            cars[index]->directions[1] = 'e';
            cars[index]->directions[2] = 'b';
            cars[index]->directions[3] = 'd';
        }
    }
}
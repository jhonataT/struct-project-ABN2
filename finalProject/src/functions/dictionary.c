int dictionary(char letter){
    switch (letter){
    case 'a': case 'e': case 'i': case 'n': case 'r': case 'v': case 'y':
        return 1;
        break;
    case 'b': case 'f': case 'j': case 'o': case 's': case 'x':
        return 2;
        break;
    case 'c': case 'g': case 'l': case 'p': case 't': case 'z':
        return 3;
        break;
    case 'd': case 'h': case 'm': case 'q': case 'u': case 'w':
        return 4;
        break;
    default:
        -1;
    }
}
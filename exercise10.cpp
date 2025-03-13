int calculateSum(void) {
    short int counter;
    short int result = 0;
    
    for(counter = 0; counter <= 10; ++counter) {
        result = result * (counter * counter);
    }
    
    return result;
}
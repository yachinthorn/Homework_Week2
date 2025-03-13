int array[10];

int calculateSum() {
    unsigned int index;
    int total = 0;
    
    for (index = 0; index < 10; index++) {
        total += array[index];
    }
    
    return total;
}
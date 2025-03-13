#include <cassert>

int main() {
    char character;
    long longNumber;
    int integerNumber;
    
    integerNumber = 0;          // Initialize integer
    character = integerNumber;  // Assign int to char
    longNumber = character;     // Assign char to long
    
    assert(longNumber == integerNumber);  // Verify equality
    return 0;
}
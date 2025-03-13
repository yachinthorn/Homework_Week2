#include <cassert>

int main() {
    int x;              // Uninitialized variable
    int y = 8;          // Initialized to 8
    int z = 0;          // Initialized to 0
    int w = 0;          // Initialized to 0
    
    // Ternary operator instead of if-else
    (x != 0) ? (z = y - 1) : (w = y + 1);
    
    // Assertion remains the same
    assert(z == 7 || w == 9);
    
    return 0;
}
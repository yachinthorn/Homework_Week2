#include <cassert>
int main() {
    int x;
    int y = 8;
    int z = 0;
    int w = 0;
    
    if (x) {
        z = y - 1;
    }
    else {
        w = y + 1;
    }
    
    assert(z == 5 || w == 9);
    return 0;
}
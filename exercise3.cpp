#include <cassert>

int main() {
    int x = 0;
    int y = 0;
    x = x + y;
    
    if (x != 3) {
        x = 2;
    } else {
        x = x + 1;
    }
    
    assert(x <= 3);
    return 0;
}
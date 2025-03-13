#include <cassert>
int nondet_int();

int main() {
    int x = nondet_int(), y = x + 1;
    assert(y > x);
    return 0;
}
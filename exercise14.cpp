#include <cassert>

int main() {
    char s[] = "abc";
    char* p = s;
    p[1] = 'y';
    assert(s[1] == 'y');
    return 0;
}
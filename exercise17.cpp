#include <iostream>

void f(int i) 
{
    int* p = nullptr;
    int y;
    
    p = new int[10];
    
    if (i != 0)
    {
        p = &y;
    }
    
    delete[] p;
}
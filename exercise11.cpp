int sumqq(int x) 
{
    short int i;
    short int s = 0;
    
    for (i = 0; i <= x; i = i + 1) 
    {
        s = s + (i + i);
    }
    
    return s;
}
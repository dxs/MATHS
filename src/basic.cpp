#include "basic.h"

int basic::factorielle(int x)
{
    return((x<=0) ? 1 : x*factorielle(x-1));
}

float basic::somme(int to, int from)
{
    float p = 0;
    int i;
    for(i = from; i <= to; i++)
    {
        p = p + (i+2);
    }
    return p;
}



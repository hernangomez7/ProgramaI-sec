#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,*q;
    int x =4;
    *p = x;
    q = p;
    *q +=3;
    printf("%d\n",*p);
    return 0;
}

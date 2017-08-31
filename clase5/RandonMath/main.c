#include <stdio.h>
#include <stdlib.h>

int rdtsc()
{
    __asm__ __volatile__("rdtsc");
}

int main()
{
    int i;
    for(i=0; i<100; i++)
    {
        srand(rdtsc());
        printf("%d\n", rand()%100);
    }
    return 0;
}



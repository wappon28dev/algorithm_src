// p72_ren: learning function scope
#include <stdio.h>

int c = 10;

void make10x(int b)
{
    b *= 10;
    c *= 10;
    printf("c: %d\n", c);
}

int main()
{
    int a = 5;

    printf("c: %d\n", c);
    make10x(a);
    printf("c: %d\n", c);

    return 0;
}

/*
èoóÕ :

    c: 10
    c: 100
    c: 100

*/

// p70_ren: learning function scope
#include <stdio.h>

void show10x(int b)
{
    printf("b: %d\n", b);
    b *= 10;
    printf("b: %d\n", b);
}

int main()
{
    int a = 5;
    printf("a: %d\n", a);
    show10x(a);
    printf("a: %d\n", a);

    return 0;
}

/*
èoóÕ :

    a: 5
    b: 5
    b: 50
    a: 5
*/

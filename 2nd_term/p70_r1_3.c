// p70_r3: learning function
#include <stdio.h>

int calculateSum(int a, int b) { return a + b; }

int main(void)
{
    int a, b;

    printf("a  => ");
    scanf("%d", &a);
    printf("b  => ");
    scanf("%d", &b);

    printf("sum : %d\n", calculateSum(a, b));

    return 0;
}

/*
o—Í :

    a => 14
    b => 15
    sum: 29

*/

// p70_ren: learning function scope
#include <stdio.h>

int calculateAmount(int age)
{
    int adult = 200;

    if (age < 6)
    {
        return 0;
    }
    else if (age < 12)
    {
        return adult / 2;
    }
    else
    {
        return adult;
    }
}

int main()
{
    int age;

    printf("îNóÓÇì¸óÕ => ");
    scanf("%d", &age);
    printf("ã‡äz: %dâ~\n", calculateAmount(age));

    return 0;
}

/*
èoóÕ :

    îNóÓÇì¸óÕ => 13
    ã‡äz: 200â~

*/

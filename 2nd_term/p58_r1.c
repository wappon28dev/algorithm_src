#include <stdio.h>

int main(void)
{
    int n[10];
    int lastDates[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int i, s;

    s = 0;
    for (i = 0; i < 10; i++)
    {
        n[i] = i + 1;
        s = s + n[i];
    }
    printf("�����̘a: %d\n", s);

    s = 0;
    for (i = 0; i < 12; i++)
    {
        s += lastDates[i];
    }
    printf("���̍��v: %d\n", s);

    return 0;
}

/*
�o�� :

    �����̘a: 55
    ���̍��v: 365

*/

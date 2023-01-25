/*

    例題1: スタックに文字を格納する
      文字を格納できるスタックを作成し, p.127 図 1, 2 のように
    文字を出し入れするプログラムを作成してみよう.

*/

#include <stdio.h>
#define N 10

void Push(char c);
char Pop(void);
int DumpStack(void);

char Stack[N];
int Sp = 0;

int main(void)
{
    Push('A');
    Push('B');
    Push('C');

    DumpStack();
    Push('D');
    DumpStack();
    printf("Pop Data = %c\n", Pop());
    DumpStack();

    return 0;
}

void Push(char c)
{
    if (Sp < N)
    {
        Stack[Sp] = c;
        Sp++;
    }
}

char Pop(void)
{
    if (Sp > 0)
    {
        Sp--;
        return Stack[Sp];
    }
}

int DumpStack(void)
{
    int i;

    printf("Sp: %d\t", Sp);
    for (i = 0; i < Sp; i++)
    {
        printf("%d: %c\t", i, Stack[i]);
    }
    printf("\n");
    return Sp;
}

/* 出力:

    Sp: 3   0: A    1: B    2: C
    Sp: 4   0: A    1: B    2: C    3: D
    Pop Data = D
    Sp: 3   0: A    1: B    2: C

*/
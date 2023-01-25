/*

    練習問題:
      例題1で, Push() や Pop() を main関数 に追加して, データが格納・取り出される順序を確認しなさい.

*/

#include <stdio.h>
#define N 10

void Push(char c);
char Pop(void);
int DumpStack(void);

char Stack[N];
int Sp = 0;

// over or under flow test (max: 10)
int main(void)
{
    Push('A');
    Push('B');
    Push('C');
    Push('D');
    Push('E');
    Push('F');
    Push('G');
    Push('H');
    Push('I');
    Push('J');
    Push('K');

    Pop();
    Pop();
    Pop();
    Pop();
    Pop();
    Pop();
    Pop();
    Pop();
    Pop();
    Pop();
    Pop();

    return 0;
}

void Push(char c)
{
    DumpStack();

    if (Sp < N)
    {
        Stack[Sp] = c;
        Sp++;
    }
    else
    {
        printf("Overflow\n");
    }
}

char Pop(void)
{
    DumpStack();

    if (Sp > 0)
    {
        Sp--;
        return Stack[Sp];
    }
    else
    {
        printf("Underflow\n");
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

/* out:

    Sp: 0
    Sp: 1   0: A
    Sp: 2   0: A    1: B
    Sp: 3   0: A    1: B    2: C
    Sp: 4   0: A    1: B    2: C    3: D
    Sp: 5   0: A    1: B    2: C    3: D    4: E
    Sp: 6   0: A    1: B    2: C    3: D    4: E    5: F
    Sp: 7   0: A    1: B    2: C    3: D    4: E    5: F    6: G
    Sp: 8   0: A    1: B    2: C    3: D    4: E    5: F    6: G    7: H
    Sp: 9   0: A    1: B    2: C    3: D    4: E    5: F    6: G    7: H    8: I
    Sp: 10  0: A    1: B    2: C    3: D    4: E    5: F    6: G    7: H    8: I    9: J
    Overflow
    Sp: 10  0: A    1: B    2: C    3: D    4: E    5: F    6: G    7: H    8: I    9: J
    Sp: 9   0: A    1: B    2: C    3: D    4: E    5: F    6: G    7: H    8: I
    Sp: 8   0: A    1: B    2: C    3: D    4: E    5: F    6: G    7: H
    Sp: 7   0: A    1: B    2: C    3: D    4: E    5: F    6: G
    Sp: 6   0: A    1: B    2: C    3: D    4: E    5: F
    Sp: 5   0: A    1: B    2: C    3: D    4: E
    Sp: 4   0: A    1: B    2: C    3: D
    Sp: 3   0: A    1: B    2: C
    Sp: 2   0: A    1: B
    Sp: 1   0: A
    Sp: 0
    Underflow

*/
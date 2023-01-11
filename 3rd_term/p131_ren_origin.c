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

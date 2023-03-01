#include <stdio.h>
#define STACK_SIZE 3

void Push(char c);
char Pop(void);
int DumpStack(void);

char Stack[STACK_SIZE];
int Sp = 0;

// over or under flow test (Maximum Stack Size: 3)
int main(void)
{
    Push('A');
    Push('B');
    Push('C');
    Push('D');

    Pop();
    Pop();
    Pop();
    Pop();

    return 0;
}

void Push(char c)
{
    DumpStack();

    if (Sp < STACK_SIZE)
    {
        Stack[Sp] = c;
        Sp++;
    }
    else
    {
        printf("== Stack Overflow !! ==\n");
        printf("Maximum Stack Size: %d\n", STACK_SIZE);
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
        printf("== Stack Underflow !! ==\n");
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

/* o—Í:

    Sp: 0
    Sp: 1   0: A
    Sp: 2   0: A    1: B
    Sp: 3   0: A    1: B    2: C
    == Stack Overflow !! ==
    Maximum Stack Size: 3
    Sp: 3   0: A    1: B    2: C
    Sp: 2   0: A    1: B
    Sp: 1   0: A
    Sp: 0
    == Stack Underflow !! ==

*/
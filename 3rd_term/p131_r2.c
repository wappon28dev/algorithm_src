/*

    例題2: キューに文字を格納する
      文字を格納できるキューを作成し, p.129 図 1, 2 のように
    文字を出し入れするプログラムを作成してみよう.

*/

#include <stdio.h>
#define N 10

void Enqueue(char c);
char Dequeue(void);
int DumpQueue(void);

char Queue[N];
int Head = 0, Tail = 0, Size = 0;

int main(void)
{
    Enqueue('A');
    Enqueue('B');
    Enqueue('C');
    Enqueue('D');
    DumpQueue();
    printf("Dequeue Data = %c\n", Dequeue());
    DumpQueue();
    return 0;
}

void Enqueue(char c)
{
    if (Size < N)
    {
        Queue[Tail] = c;
        Tail++;
        Size++;

        if (Tail == N)
        {
            Tail = 0;
        }
    }
    else
    {
        printf("Queue Overflow\n");
    }
}

char Dequeue(void)
{
    char data;
    if (Size > 0)
    {
        data = Queue[Head];
        Head++;
        Size--;

        if (Head == N)
        {
            Head = 0;
        }
        return data;
    }
    else
    {
        printf("Queue Underflow\n");
    }
}

int DumpQueue(void)
{
    int i, ct;

    printf("Head: %d, Tail: %d\n", Head, Tail);
    i = Head;
    for (ct = 0; ct < Size; ct++)
    {
        printf("%d: %c\t", i, Queue[i]);
        if (i == N - 1)
        {
            i = 0;
        }
        else
        {
            i++;
        }
    }
    printf("\n");
    return Size;
}

/* 出力:

    0: A    1: B    2: C    3: D
    Dequeue Data = A
    Head: 1, Tail: 4
    1: B    2: C    3: D

*/
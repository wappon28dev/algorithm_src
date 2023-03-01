/*

    練習問題:
      例題2で, Enqueue() や Dequeue() を main関数 に追加して,
    データが格納・取り出される順序を確認しなさい.

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
    Enqueue('E');
    DumpQueue();
    printf("Dequeue Data = %c\n", Dequeue());
    DumpQueue();
    printf("Dequeue Data = %c\n", Dequeue());
    DumpQueue();
    printf("Dequeue Data = %c\n", Dequeue());
    DumpQueue();
    printf("Dequeue Data = %c\n", Dequeue());
    DumpQueue();
    printf("Dequeue Data = %c\n", Dequeue());
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

    Head: 0, Tail: 5
    0: A    1: B    2: C    3: D    4: E
    Dequeue Data = A
    Head: 1, Tail: 5
    1: B    2: C    3: D    4: E
    Dequeue Data = B
    Head: 2, Tail: 5
    2: C    3: D    4: E
    Dequeue Data = C
    Head: 3, Tail: 5
    3: D    4: E
    Dequeue Data = D
    Head: 4, Tail: 5
    4: E
    Dequeue Data = E
    Head: 5, Tail: 5

    Queue Underflow
    Dequeue Data =
    Head: 5, Tail: 5

*/
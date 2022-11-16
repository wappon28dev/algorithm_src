#include <stdio.h>
#include <string.h>

struct LIST
{
    char character;
    int nextIndex;
} Data[8] = {
    {' ', 1},
    {'A', 2},
    {'B', 4},
    {'D', 5},
    {'C', 3},
    {'E', 0},
    {' ', 0},
    {' ', 0},
};

int lastIndex;

void initList()
{
    lastIndex = 5;
}

void printList(int i)
{
    while (i != 0)
    {
        printf("%c", Data[i].character);
        i = Data[i].nextIndex;
    }
    printf("\n");
}

void addList(char c)
{
    int i, j;

    i = Data[0].nextIndex;
    while (i != 0)
    {
        j = i;
        i = Data[i].nextIndex;
    }

    lastIndex++;
    Data[j].nextIndex = lastIndex;
    Data[lastIndex].character = c;
    Data[lastIndex].nextIndex = 0;
}

void insertListTo(int n, char c)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        j = i;
        i = Data[i].nextIndex;
    }
    int nextRefIndex = Data[i].nextIndex;

    Data[n].nextIndex = (lastIndex + 1);
    Data[(lastIndex + 1)].character = c;
    Data[(lastIndex + 1)].nextIndex = nextRefIndex;
}

void deleteList(int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        j = i;
        i = Data[i].nextIndex;
    }
    int nextRefIndex = Data[i].nextIndex;

    Data[nextRefIndex].character = '\0';
}

int main(void)
{
    initList();
    printList(Data[0].nextIndex);

    insertListTo(2, 'x');
    printList(Data[0].nextIndex);

    deleteList(2);
    printList(Data[0].nextIndex);

    return 0;
}

/*
�o��:

    ABCDE
    ABxCDE

*/
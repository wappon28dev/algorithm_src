#include <stdio.h>
#include <string.h>

struct TREE
{
    char label;
    int leftPointer;
    int rightPointer;
} tree[10] = {
    {' ', -1, 1},
    {'*', 2, 3},
    {'*', 4, 5},
    {'5', -1, -1},
    {'3', -1, -1},
    {'+', 6, 7},
    {'2', -1, -1},
    {'4', -1, -1},
};

void printTree(int i)
{
    if (tree[i].leftPointer == -1)
    {
        printf("%c", tree[i].label);
    }
    else
    {
        printf("(");
        printTree(tree[i].leftPointer);
        printf("%c", tree[i].label);
        printTree(tree[i].rightPointer);
        printf(")");
    }
}

int main(void)
{
    printTree(tree[0].rightPointer);
    printf("\n");
    return 0;
}

/*
èoóÕ:

    ((2+(8/4))*(6+3))

*/
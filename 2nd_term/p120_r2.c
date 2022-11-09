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
    {'+', 4, 7},
    {'+', 6, 5},
    {'2', -1, -1},
    {'3', -1, -1},
    {'6', -1, -1},
    {'/', 8, 9},
    {'8', -1, -1},
    {'4', -1, -1},
};

// void initTree(void)
// {
//     tree[0].label = ' ';
//     tree[0].leftPointer = -1;
//     tree[0].rightPointer = 1;
//     tree[1].label = '*';
//     tree[1].leftPointer = 2;
//     tree[1].rightPointer = 3;
//     tree[2].label = '+';
//     tree[2].leftPointer = 4;
//     tree[2].rightPointer = 7;
//     tree[3].label = '+';
//     tree[3].leftPointer = 6;
//     tree[3].rightPointer = 5;
//     tree[4].label = '2';
//     tree[4].leftPointer = -1;
//     tree[4].rightPointer = -1;
//     tree[5].label = '3';
//     tree[5].leftPointer = -1;
//     tree[5].rightPointer = -1;
//     tree[6].label = '6';
//     tree[6].leftPointer = -1;
//     tree[6].rightPointer = -1;
//     tree[7].label = '/';
//     tree[7].leftPointer = 8;
//     tree[7].rightPointer = 9;
//     tree[8].label = '8';
//     tree[8].leftPointer = -1;
//     tree[8].rightPointer = -1;
//     tree[9].label = '4';
//     tree[9].leftPointer = -1;
//     tree[9].rightPointer = -1;
// }

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
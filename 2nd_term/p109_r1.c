#include <stdio.h>
#include <string.h>

#define ITEM_LENGTH 4
#define ITEM_NAME_LENGTH 16

struct ITEM
{
    char name[ITEM_NAME_LENGTH];
    int price;
} ITEMS[ITEM_LENGTH] = {
    {"CD-R", 720},
    {"SD Card", 1800},
    {"Color Ink", 4250},
    {"", 0},
};

int main(void)
{

    int i;

    strcpy(ITEMS[3].name, "Label");
    ITEMS[3].price = 2400;

    for (i = 0; i < ITEM_LENGTH; i++)
    {
        printf("%s\t %d‰~\n", ITEMS[i].name, ITEMS[i].price);
    }

    return 0;
}

/*
o—Í:

    CD-R             720‰~
    SD Card          1800‰~
    Color Ink                4250‰~
    Label            2400‰~

*/
#include <stdio.h>
#include <string.h>

#define ITEM_LENGTH 4
#define ITEM_NAME_LENGTH 16
#define ITEM_UUID_LENGTH 8

struct ITEM
{
    char name[ITEM_NAME_LENGTH];
    int price;
    char uuid[ITEM_UUID_LENGTH];
} ITEMS[ITEM_LENGTH] = {
    {"CD-R", 720, "CDR50W50"},
    {"SD Card", 1800, "SDC8G231"},
    {"Color Ink", 4250, "CI456MP5"},
    {"", 0, ""},
};

int main(void)
{

    int i;

    strcpy(ITEMS[3].name, "Label");
    ITEMS[3].price = 2400;
    strcpy(ITEMS[3].uuid, "LB120150");

    for (i = 0; i < ITEM_LENGTH; i++)
    {
        printf("%s\t %d‰~\t %s\n", ITEMS[i].name, ITEMS[i].price, ITEMS[i].uuid);
    }

    return 0;
}

/*
o—Í:

    CD-R	 720‰~	 CDR50W50
    SD Card	 1800‰~	 SDC8G231
    Color Ink	 4250‰~	 CI456MP5
    Label	 2400‰~	 LB120150

*/
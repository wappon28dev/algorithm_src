#include <stdio.h>
#include <string.h>

int main(void)
{
    char char1[] = "C language ";
    char char2[] = "Program";
    char charUnion[256];

    // charUnion <- char1
    strcpy(charUnion, char1);
    printf("%s\n", charUnion);

    // charUnion + char2
    strcat(charUnion, char2);
    printf("%s\n", charUnion);

    return 0;
}

/*
o—Í :

    C language
    C language Program

*/

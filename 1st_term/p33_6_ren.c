// p33_6_ren: show character of char, char[] and putchar, puts
#include <stdio.h>

int main(void) {
    
    char singleChar = 'A';
    char arrayChar[] = {'1','2','3'};
    int asciiNum = 0x41;

    printf("%c\n", singleChar);
    printf("%d\n", singleChar);
    printf("%s\n", arrayChar);
    printf("%d\n", asciiNum);
    printf("%c\n", asciiNum);

    //ren
    printf("\n");
    putchar(singleChar);
    printf("\n");
    puts(arrayChar);
    putchar(asciiNum);

    return 0;

}


/*
èoóÕ : 

    A
    65
    123
    65
    A

    A
    123
    A    

*/

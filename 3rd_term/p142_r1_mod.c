#include <stdio.h>
#include <string.h>
#define LENGTH 8

int Sequential(char *key);

char Word[7][LENGTH] = {
    "orange",
    "green",
    "blue",
    "indigo",
    "violet",
    "red",
    "yellow",
};
int n = 7;

int main(void)
{

    char key[LENGTH];
    int result;

    printf("what word are you looking for => ");
    scanf("%s", &key);
    result = Sequential(key);
    if (result != -1)
    {
        printf("found \"%s\" at #%d\n", key, result);
    }
    else
    {
        printf("failure...\n");
    }

    return 0;
}

int Sequential(char *key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (!strcmp(key, Word[i]))
        {
            return i;
        }
    }
    return -1;
}

/* o—Í:

    what word are you looking for => violet
    found "violet" at #4

*/
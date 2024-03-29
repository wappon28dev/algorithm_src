#include <stdio.h>
#include <string.h>
#define LENGTH 8

int Binary(char *key);

char Word[7][LENGTH] = {
    "blue",
    "green",
    "indigo",
    "orange",
    "red",
    "violet",
    "yellow",
};
int n = 7;

int main(void)
{
    char key[LENGTH];
    int result;

    printf("Enter a word: ");
    scanf("%s", key);
    result = Binary(key);

    if (result != -1)
    {
        printf("Hit : %d\n", result);
    }
    else
    {
        printf("Miss");
    }

    return 0;
}

int Binary(char *key)
{
    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        int comp = strcmp(key, Word[mid]);
        printf("%d %d %d %s\n", low, mid, high, Word[mid]);

        if (!comp)
        {
            return mid;
        }
        else if (comp < 0)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

/* �o��:

    Enter a word: blue
    0 3 6 orange
    0 1 2 green
    0 0 0 blue
    Hit : 0

*/

/* �o��:

Enter a word: white
    0 3 6 orange
    4 5 6 violet
    6 6 6 yellow
    Miss
*/

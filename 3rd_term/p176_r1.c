#include <stdio.h>
#include <string.h>
#define LENGTH 7

void bubble(char *data[]);
void swap(char *data[], int i, int j);
void print(char *data[]);

int main(void)
{
    char *data[LENGTH] = {"orange", "green", "blue", "indigo", "violet", "red", "yellow"};

    printf("origin: ");
    print(data);
    bubble(data);
    printf("sorted: ");
    print(data);

    return 0;
}

void bubble(char *data[])
{
    int i, j;

    for (i = 0; i < LENGTH - 1; i++)
    {
        for (j = LENGTH - 1; j > i; j--)
        {
            if (strcmp(data[j], data[j - 1]) < 0)
            {
                swap(data, j, j - 1);
            }
        }
    }
}

void swap(char *data[], int i, int j)
{
    char *temp;

    temp = data[i];
    data[i] = data[j];
    data[j] = temp;
}

void print(char *data[])
{
    int i;

    for (i = 0; i < LENGTH; i++)
    {
        printf("%s ", data[i]);
    }
    printf("\n");
}

/* out:

    origin: orange green blue indigo violet red yellow
    sorted: blue green indigo orange red violet yellow

*/
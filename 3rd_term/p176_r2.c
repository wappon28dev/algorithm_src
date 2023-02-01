#include <stdio.h>
#include <string.h>
#define LENGTH 7
void selectionSort(char *data[]);
void swap(char *data[], int i, int j);
void print(char *data[]);

int main(void)
{
    char *data[LENGTH] = {"orange", "green", "blue", "indigo", "violet", "red", "yellow"};

    printf("origin: ");
    print(data);
    selectionSort(data);
    printf("sorted: ");
    print(data);

    return 0;
}

void selectionSort(char *data[])
{
    int i, j, min;

    for (i = 0; i < LENGTH - 1; i++)
    {
        min = i;
        for (j = i + 1; j < LENGTH; j++)
        {
            if (strcmp(data[j], data[min]) < 0)
            {
                min = j;
            }
        }
        swap(data, i, min);
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
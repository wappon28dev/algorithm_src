/*

    ���1: �񕪒T���ɂ��P�꒠����̒T��
      "blue", "green", "indigo", "orange", "red", "violet", "yellow" �̏��ɏ�����
    �P�ꂪ�o�^���ꂽ�z�� (�P�꒠) ����, ���͂��ꂽ�P���񕪒T���ɂ��T�����̃v���O������,
    low, high, middle �̒l�� Word[middle] �Ɋi�[���ꂽ�P����g���[�X���Ă݂悤.

*/
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
    int kekka;

    scanf("%s", &key);
    kekka = Binary(key);

    if (kekka != -1)
    {
        printf("Hit : %d\n", kekka);
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
    int middle;
    int cmp;

    while (low <= high)
    {
        middle = (low + high) / 2;
        cmp = strcmp(key, Word[middle]);

        if (cmp < 0)
            high = middle - 1;
        else if (cmp > 0)
            low = middle + 1;
        else
            return middle;
    }
    return -1;
}

/* �o��1:

    blue
    Hit : 0

*/

/* �o��2:

    white
    Miss

*/
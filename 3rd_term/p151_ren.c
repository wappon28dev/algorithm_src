
/*

    ���K���
      ���1�̃v���O��������͂�, "blue" �� "white" ��T���ꍇ�̎��s���ʂ�
    �m�F���Ȃ���, �܂�, Binary�֐� ��while���̒��Ɏ��̎Α̕�����ǉ���,
    �\1, 2�̃g���[�X���ʂ��m�F���Ȃ����B

    ``` c
    for (i = 0; i < n; i++)
    {
        printf("Word[%d]: %s\n", i, Word[i]); // <<< �ǉ�
        if (!strcmp(key, Word[i]))
        {
            return i;
        }
    }
    ```

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

    scanf("%s", &*key);
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
        printf("%d %d %d %s\n", low, middle, high, Word[middle]);

        if (cmp < 0)
            high = middle - 1;
        else if (cmp > 0)
            low = middle + 1;
        else
            return middle;
    }
    return -1;
}

/* �o��:

    blue
    0 3 6 orange
    0 1 2 green
    0 0 0 blue
    Hit : 0

*/

/* �o��:

    white
    0 3 6 orange
    4 5 6 violet
    6 6 6 yellow
    Miss

*/
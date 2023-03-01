/*

    ���K���
      ���1�̃v���O��������͂�, "blue" �� "white" ��T���ꍇ�̎��s���ʂ��m�F���Ȃ���.
    �܂�, Sequential() �֐��� for ���̒��Ɏ��̎Α̕�����ǉ���, �\ 1, 2 �̃g���[�X���ʂ��m�F���Ȃ���.

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
    int kekka;

    scanf("%s", key);
    kekka = Sequential(key);
    if (kekka != -1)
    {
        printf("Hit : %d\n", kekka);
    }
    else
    {
        printf("Miss\n");
    }

    return 0;
}

int Sequential(char *key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Word[%d]: %s\n", i, Word[i]);
        if (!strcmp(key, Word[i]))
        {
            return i;
        }
    }
    return -1;
}

/* �o��1:

    blue
    Word[0]: orange
    Word[1]: green
    Word[2]: blue
    Hit : 2

*/

/* �o��2:

    white
    Word[0]: orange
    Word[1]: green
    Word[2]: blue
    Word[3]: indigo
    Word[4]: violet
    Word[5]: red
    Word[6]: yellow
    Miss

*/
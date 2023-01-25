/*

    ���1: ���`�T���ɂ��P�꒠����̒P��̌���
      "orange", "green", "blue", "indigo", "violet", "red", "yellow" �̏���
    �P�ꂪ�o�^���ꂽ�z�� (�P�꒠) ����, ���͂��ꂽ�P�����`�T���ɂ��T���v���O������,
    "blue" �� "white" ��T���ꍇ�ɂ���, i �̒l�� Word[i] �Ɋi�[���ꂽ�P����g���[�X���Ă݂悤.

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

    scanf("%s", &key);
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
        if (!strcmp(key, Word[i]))
        {
            return i;
        }
    }
    return -1;
}

/* �o��1:

    orange
    Hit : 0

*/

/* �o��2:

    white
    Miss

*/
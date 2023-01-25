/*

    1.
      20, 50, 60, 10, 40, 30 �̏��ɐ��l���o�^���ꂽ�z�񂩂�,
    ���͂��ꂽ���l����`�T���ɂ��T���v���O���������Ȃ���.


*/

#include <stdio.h>
#include <string.h>
#define LENGTH 6

int Numbers[LENGTH] = {
    20,
    50,
    60,
    10,
    40,
    30,
};

int getIndexOfKey(int key)
{
    int index;
    for (index = 0; index < LENGTH; index++)
    {
        if (key == Numbers[index])
        {
            return index;
        }
    }
    return -1;
}

int main(void)
{

    int key;

    printf("what number are you looking for => ");
    scanf("%d", &key);

    int result = getIndexOfKey(key);
    if (result != -1)
    {
        printf("found \"%d\" at #%d\n", key, result);
    }
    else
    {
        printf("failure...\n");
    }

    return 0;
}
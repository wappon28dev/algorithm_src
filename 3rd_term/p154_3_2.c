/*

    3.
      10, 20, 30, 40, 50, 60 �̏��ɐ��l�������œo�^���ꂽ�z��ɂ���, ���̖₢�ɓ����Ȃ���.

    (2)
      (1) �̃v���O������, ��r�񐔂𐔂���ϐ���ǉ����ĕ\����, �z��ɓo�^���ꂽ�e���l��
    �T������ꍇ�ɂ��ăg���[�X���Ȃ���.

*/

#include <stdio.h>
#define LENGTH 6

int Numbers[LENGTH] = {
    10,
    20,
    30,
    40,
    50,
    60,
};

int key = 0;
int low = 0;
int high = LENGTH;
int mid = LENGTH / 2;

int searchIndex = 0;

int main()
{

    printf("what number are you looking for => ");
    scanf("%d", &key);

    while (low <= high)
    {
        searchIndex++;
        printf("low: %d\tmid: %d\thigh: %d\tdata: %d\n", low, mid, high, Numbers[mid]);

        if (key == Numbers[mid])
        {
            printf("found \"%d\" at #%d within %d times\n", key, mid, searchIndex);
            return 0;
        }
        else if (key < Numbers[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }

        mid = (low + high) / 2;
    }
    printf("failure... for %d times \n", searchIndex);

    return -1;
}

/* out:

    what number are you looking for => 30
    low: 0  mid: 3  high: 6  data: 40
    low: 0  mid: 1  high: 2  data: 20
    low: 2  mid: 2  high: 2  data: 30
    found "30" at #2 within 3 times

*/
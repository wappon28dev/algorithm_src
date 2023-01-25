/*

    3.
      10, 20, 30, 40, 50, 60 �̏��ɐ��l�������œo�^���ꂽ�z��ɂ���, ���̖₢�ɓ����Ȃ���.

    (3)
      (2) ��, �o�^����Ă��Ȃ����l (�Ⴆ��, 0, 35, 70 �Ȃ�) ���L�[�ɂ����ꍇ�ɂ���
    �g���[�X���Ȃ���.

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

int main()
{

    printf("what number are you looking for => ");
    scanf("%d", &key);

    while (low <= high)
    {
        printf("low: %d\tmid: %d\thigh: %d\tdata: %d\n", low, mid, high, Numbers[mid]);

        if (key == Numbers[mid])
        {
            printf("found \"%d\" at #%d\n", key, mid);
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
    printf("failure... \"%d\" not found\n", key);

    return -1;
}

/* out:

    what number are you looking for => 70
    low: 0  mid: 3  high: 6 data: 40
    low: 4  mid: 5  high: 6 data: 60
    low: 6  mid: 6  high: 6 data: 6
    failure... "70" not found

*/
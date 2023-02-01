/*

    1. �����@�ɂ�鐔�l�̕��ёւ�
      20, 50, 60, 10, 40, 30 �̏��ɐ��l���o�^���ꂽ�z�񂪂���B�����@�ɂ�菸����
    ���ёւ��鎟�̃v���O������, �e�ϐ����r��, ������, data[i] �Ɋi�[���ꂽ�l���g���[�X
    ���Ă݂悤.

*/

#include <stdio.h>

void Bubble(int data[], int n);
void Swap(int data[], int i, int j);
void Print(int data[], int n);

int main(void)
{
    int data[] = {20, 50, 60, 10, 40, 30};
    int n = 6;

    Print(data, n);
    Bubble(data, n);
    Print(data, n);

    return 0;
}

void Bubble(int data[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        for (j = n - 1; j > i; j--)
        {
            if (data[j] < data[j - 1])
            {
                Swap(data, j, j - 1);
            }
        }
    }
}

void Swap(int data[], int i, int j)
{
    int temp;

    temp = data[i];
    data[i] = data[j];
    data[j] = temp;
}

void Print(int data[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
}

/* out:

    20 50 60 10 40 30
    10 20 30 40 50 60

*/
/*

    ���K���:
      ���1�̃v���O��������͂�, ���s���ʂ��m�F���Ȃ����B
    �܂�, Selection�֐��� i �� for���̒��Ɂ��̎Α̕�����ǉ���,
    �z�� �\1 �̂悤�ɕω����邱�Ƃ��m�F���Ȃ���.

    ```c
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (data[j] < data[min])
            {
                min = j;
            }
        }
        Swap(data, i, min);
        Print(data, n);     // <<< �ǉ�
    }
    ```

*/

#include <stdio.h>

void Selection(int data[], int n);
void Swap(int data[], int i, int j);
void Print(int data[], int n);

int main(void)
{
    int data[] = {20, 50, 60, 10, 40, 30};
    int n = 6;

    Print(data, n);
    Selection(data, n);
    Print(data, n);

    return 0;
}

void Selection(int data[], int n)
{
    int i, j, min;

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (data[j] < data[min])
            {
                min = j;
            }
        }
        Swap(data, i, min);
        Print(data, n);
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
    10 50 60 20 40 30
    10 20 60 50 40 30
    10 20 30 50 40 60
    10 20 30 40 50 60
    10 20 30 40 50 60
    10 20 30 40 50 60

*/
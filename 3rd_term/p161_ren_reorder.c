/*

    ���K���:
      ���1�̃v���O��������͂�, ���s���ʂ��m�F���Ȃ����B
    �܂�, Selection�֐��� i �� for���̒��Ɂ��̎Α̕�����ǉ���,
    �z�� �\1 �̂悤�ɕω����邱�Ƃ��m�F���Ȃ���.

    ```c
        for (j = n - 1; j > i; j--)
        {
            if (data[j] < data[j - 1])
            {
                Swap(data, j, j - 1);
                Print(data, n);     // <<< �ǉ�
            }
        }

    ```

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
            if (data[j] > data[j - 1]) // `<` -> `>` �֕ύX
            {
                Swap(data, j, j - 1);
                Print(data, n);
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
    20 50 60 40 10 30
    20 60 50 40 10 30
    60 20 50 40 10 30
    60 20 50 40 30 10
    60 50 20 40 30 10
    60 50 40 20 30 10
    60 50 40 30 20 10
    60 50 40 30 20 10

*/
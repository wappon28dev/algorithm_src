/*

    1. 交換法による数値の並び替え
      20, 50, 60, 10, 40, 30 の順に数値が登録された配列がある。交換法により昇順に
    並び替える次のプログラムで, 各変数や比較回数, 交換回数, data[i] に格納された値をトレース
    してみよう.

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
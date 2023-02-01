/*

    2. 選択法による数値の並び替え
      20, 50, 60, 10, 40, 30 の順に数値が登録された配列がある。選択法により昇順に
    並び替える次のプログラムで, 各変数や比較回数, 交換回数, data[i] に格納された値をトレース
    してみよう.

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
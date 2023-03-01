
/*

    練習問題
      例題1のプログラムを入力し, "blue" と "white" を探す場合の実行結果を
    確認しなさい, また, Binary関数 のwhile文の中に次の斜体部分を追加し,
    表1, 2のトレース結果を確認しなさい。

    ``` c
    for (i = 0; i < n; i++)
    {
        printf("Word[%d]: %s\n", i, Word[i]); // <<< 追加
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

int Binary(char *key);

char Word[7][LENGTH] = {
    "blue",
    "green",
    "indigo",
    "orange",
    "red",
    "violet",
    "yellow",
};
int n = 7;

int main(void)
{
    char key[LENGTH];
    int kekka;

    scanf("%s", &*key);
    kekka = Binary(key);

    if (kekka != -1)
    {
        printf("Hit : %d\n", kekka);
    }
    else
    {
        printf("Miss");
    }

    return 0;
}

int Binary(char *key)
{
    int low = 0;
    int high = n - 1;
    int middle;
    int cmp;

    while (low <= high)
    {
        middle = (low + high) / 2;
        cmp = strcmp(key, Word[middle]);
        printf("%d %d %d %s\n", low, middle, high, Word[middle]);

        if (cmp < 0)
            high = middle - 1;
        else if (cmp > 0)
            low = middle + 1;
        else
            return middle;
    }
    return -1;
}

/* 出力:

    blue
    0 3 6 orange
    0 1 2 green
    0 0 0 blue
    Hit : 0

*/

/* 出力:

    white
    0 3 6 orange
    4 5 6 violet
    6 6 6 yellow
    Miss

*/
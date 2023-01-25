/*

    例題1: 二分探索による単語帳からの探索
      "blue", "green", "indigo", "orange", "red", "violet", "yellow" の順に昇順で
    単語が登録された配列 (単語帳) から, 入力された単語を二分探索により探す次のプログラムで,
    low, high, middle の値と Word[middle] に格納された単語をトレースしてみよう.

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

    scanf("%s", &key);
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

        if (cmp < 0)
            high = middle - 1;
        else if (cmp > 0)
            low = middle + 1;
        else
            return middle;
    }
    return -1;
}

/* 出力1:

    blue
    Hit : 0

*/

/* 出力2:

    white
    Miss

*/
/*

    例題1: 線形探索による単語帳からの単語の検索
      "orange", "green", "blue", "indigo", "violet", "red", "yellow" の順に
    単語が登録された配列 (単語帳) から, 入力された単語を線形探索により探すプログラムで,
    "blue" と "white" を探す場合について, i の値と Word[i] に格納された単語をトレースしてみよう.

*/

#include <stdio.h>
#include <string.h>
#define LENGTH 8

int Sequential(char *key);

char Word[7][LENGTH] = {
    "orange",
    "green",
    "blue",
    "indigo",
    "violet",
    "red",
    "yellow",
};
int n = 7;

int main(void)
{

    char key[LENGTH];
    int kekka;

    scanf("%s", &key);
    kekka = Sequential(key);
    if (kekka != -1)
    {
        printf("Hit : %d\n", kekka);
    }
    else
    {
        printf("Miss\n");
    }

    return 0;
}

int Sequential(char *key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (!strcmp(key, Word[i]))
        {
            return i;
        }
    }
    return -1;
}

/* 出力1:

    orange
    Hit : 0

*/

/* 出力2:

    white
    Miss

*/
/*

    練習問題
      例題1のプログラムを入力し, "blue" と "white" を探す場合の実行結果を確認しなさい.
    また, Sequential() 関数の for 文の中に次の斜体部分を追加し, 表 1, 2 のトレース結果を確認しなさい.

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

    scanf("%s", key);
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
        printf("Word[%d]: %s\n", i, Word[i]);
        if (!strcmp(key, Word[i]))
        {
            return i;
        }
    }
    return -1;
}

/* 出力1:

    blue
    Word[0]: orange
    Word[1]: green
    Word[2]: blue
    Hit : 2

*/

/* 出力2:

    white
    Word[0]: orange
    Word[1]: green
    Word[2]: blue
    Word[3]: indigo
    Word[4]: violet
    Word[5]: red
    Word[6]: yellow
    Miss

*/
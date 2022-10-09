#include <stdio.h>
#define N 5

int main(void)
{
    int page[N];
    int sum = 0;

    int i;
    for (i = 0; i < N; i++)
    {
        printf("%d日目: ページ数 > ", i + 1);
        scanf("%d", &page[i]);

        sum += page[i];
    }

    printf("--------------------\n");
    printf("%d日で, %d枚進むぜっ\n", N, sum);
    printf("平均: %3.1f [枚/日]\n", (float)sum / N);

    return 0;
}

/*
出力 :

    1日目: ページ数 > 1
    2日目: ページ数 > 5
    3日目: ページ数 > 4
    4日目: ページ数 > 6
    5日目: ページ数 > 2

    5日で, 18枚進むぜっ
    平均: 3.6 [枚/日]

*/

#include <stdio.h>

int main(void)
{
    int targetPage = 30;
    int donePage[99];
    int donePageSum = 0;
    int passedDate = 0;

    do
    {

        printf("%d日目: ページ数 > ", passedDate + 1);
        scanf("%d", &donePage[passedDate]);

        passedDate++;

        // calculate sum
        int i;
        for (i = 0; i < passedDate; i++)
        {
            donePageSum += donePage[i];
        }

    } while (donePageSum < targetPage);

    printf("--------------------\n");
    printf("%dページを%d日で達成!\n", targetPage, passedDate);

    return 0;
}

/*
出力 :

    1日目: ページ数 > 5
    2日目: ページ数 > 2
    3日目: ページ数 > 3
    4日目: ページ数 > 4
    5日目: ページ数 > 6
    6日目: ページ数 > 8
    7日目: ページ数 > 5
    --------------------
    30ページを7日で達成!

*/

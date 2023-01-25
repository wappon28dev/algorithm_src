/*

    3.
      10, 20, 30, 40, 50, 60 の順に数値が昇順で登録された配列について, 次の問いに答えなさい.

    (1)
      入力された数値を, 二分探索により探すプログラムを作りなさい.

*/

#include <stdio.h>
#define LENGTH 6

int Numbers[LENGTH] = {
    10,
    20,
    30,
    40,
    50,
    60,
};

int key = 0;
int low = 0;
int high = LENGTH;
int mid = LENGTH / 2;

int main()
{

    printf("what number are you looking for => ");
    scanf("%d", &key);

    while (low <= high)
    {
        if (key == Numbers[mid])
        {
            printf("found \"%d\" at #%d\n", key, mid);
            return 0;
        }
        else if (key < Numbers[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        mid = (low + high) / 2;
    }
    printf("failure...\n");

    return -1;
}

/* out:

    what number are you looking for => 30
    found "30" at #2

*/
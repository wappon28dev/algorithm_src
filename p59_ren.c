#include <stdio.h>

int main(void)
{
    int targetPage = 30;
    int donePage[99];
    int donePageSum = 0;
    int passedDate = 0;

    do
    {

        printf("%d����: �y�[�W�� > ", passedDate + 1);
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
    printf("%d�y�[�W��%d���ŒB��!\n", targetPage, passedDate);

    return 0;
}

/*
�o�� :

    1����: �y�[�W�� > 5
    2����: �y�[�W�� > 2
    3����: �y�[�W�� > 3
    4����: �y�[�W�� > 4
    5����: �y�[�W�� > 6
    6����: �y�[�W�� > 8
    7����: �y�[�W�� > 5
    --------------------
    30�y�[�W��7���ŒB��!

*/

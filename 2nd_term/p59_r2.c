#include <stdio.h>
#define N 5

int main(void)
{
    int page[N];
    int sum = 0;

    int i;
    for (i = 0; i < N; i++)
    {
        printf("%d����: �y�[�W�� > ", i + 1);
        scanf("%d", &page[i]);

        sum += page[i];
    }

    printf("--------------------\n");
    printf("%d����, %d���i�ނ���\n", N, sum);
    printf("����: %3.1f [��/��]\n", (float)sum / N);

    return 0;
}

/*
�o�� :

    1����: �y�[�W�� > 1
    2����: �y�[�W�� > 5
    3����: �y�[�W�� > 4
    4����: �y�[�W�� > 6
    5����: �y�[�W�� > 2

    5����, 18���i�ނ���
    ����: 3.6 [��/��]

*/

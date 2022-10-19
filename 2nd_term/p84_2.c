// p84_2: Array test 
#include <stdio.h>
#include <string.h>

int main(void) {

    int personNum = 5;
    int subjectLength = 3;
    int personData[personNum][subjectLength];
    int personDataSum[personNum];

    char *subjectNames[3] = { "�p��" , "����" , "���w" };

    int i, j;
    for (i = 0; i < personNum; i++){
        printf(" -- %d�l�� -- \n", i + 1);

        for (j = 0; j < subjectLength; j++){
            printf("%s�̓_�� > ", subjectNames[j]);
            scanf("%d", &personData[i][j]);
            personDataSum[i] += personData[i][j];
        }

    }

    printf("\n--------------------\n");
    i = 0;
    for (i = 0; i < personNum; i++){
        printf(" -- %d�l�� -- \n", i + 1);
        printf("���v: %4.0d �_\n", personDataSum[i]);
        printf("����: %3.1f �_\n", (float)personDataSum[i] / subjectLength);
    }


    return 0;

}

/*
�o�� : 

    -- 1�l�� --
    �p��̓_�� > 15
    ����̓_�� > 45
    ���w�̓_�� > 68
    -- 2�l�� --
    �p��̓_�� > 35
    ����̓_�� > 45
    ���w�̓_�� > 86
    -- 3�l�� --
    �p��̓_�� > 78
    ����̓_�� > 45
    ���w�̓_�� > 86
    -- 4�l�� --
    �p��̓_�� > 15
    ����̓_�� > 46
    ���w�̓_�� > 54
    -- 5�l�� --
    �p��̓_�� > 35
    ����̓_�� > 15
    ���w�̓_�� > 78

    --------------------
    -- 1�l�� --
    ���v:  128 �_
    ����: 42.7 �_
    -- 2�l�� --
    ���v:  166 �_
    ����: 55.3 �_
    -- 3�l�� --
    ���v:  209 �_
    ����: 69.7 �_
    -- 4�l�� --
    ���v:  115 �_
    ����: 38.3 �_
    -- 5�l�� --
    ���v:  128 �_
    ����: 42.7 �_

*/

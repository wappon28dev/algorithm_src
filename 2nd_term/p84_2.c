// p84_2: Array test 
#include <stdio.h>
#include <string.h>

int main(void) {

    int personNum = 5;
    int subjectLength = 3;
    int personData[personNum][subjectLength];
    int personDataSum[personNum];

    char *subjectNames[3] = { "英語" , "国語" , "数学" };

    int i, j;
    for (i = 0; i < personNum; i++){
        printf(" -- %d人目 -- \n", i + 1);

        for (j = 0; j < subjectLength; j++){
            printf("%sの点数 > ", subjectNames[j]);
            scanf("%d", &personData[i][j]);
            personDataSum[i] += personData[i][j];
        }

    }

    printf("\n--------------------\n");
    i = 0;
    for (i = 0; i < personNum; i++){
        printf(" -- %d人目 -- \n", i + 1);
        printf("合計: %4.0d 点\n", personDataSum[i]);
        printf("平均: %3.1f 点\n", (float)personDataSum[i] / subjectLength);
    }


    return 0;

}

/*
出力 : 

    -- 1人目 --
    英語の点数 > 15
    国語の点数 > 45
    数学の点数 > 68
    -- 2人目 --
    英語の点数 > 35
    国語の点数 > 45
    数学の点数 > 86
    -- 3人目 --
    英語の点数 > 78
    国語の点数 > 45
    数学の点数 > 86
    -- 4人目 --
    英語の点数 > 15
    国語の点数 > 46
    数学の点数 > 54
    -- 5人目 --
    英語の点数 > 35
    国語の点数 > 15
    数学の点数 > 78

    --------------------
    -- 1人目 --
    合計:  128 点
    平均: 42.7 点
    -- 2人目 --
    合計:  166 点
    平均: 55.3 点
    -- 3人目 --
    合計:  209 点
    平均: 69.7 点
    -- 4人目 --
    合計:  115 点
    平均: 38.3 点
    -- 5人目 --
    合計:  128 点
    平均: 42.7 点

*/

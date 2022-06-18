// p42_r1: create if architecture with conditions
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandom(){
	srand((unsigned int)time(NULL));
    return rand() % 10;
}

int waitAnswer(){
    int num;
    printf("どーんな数でしょ？？？ (0 - 9) > ");
    scanf("%d", &num);
    return num;
}

int main(void) {
    
    int answer = getRandom();
    int num = waitAnswer();

    if (num >= 0 && num <=9){
        if(num == answer){
            printf("あたり!!!  今日の運勢は晴れ☆¥n");
        } else {
            printf("はずれ...¥n");
            printf("ちなみに答えは %d です (笑) ", answer);
        }
    } else {
        printf("正しい値を言え!!! ¥n出直しだ!!! ¥n¥n");
        main();
    }


    return 0;

}


/*
入力 :

    どーんな数でしょ？？？ (0 - 9) > 1

出力 : 

    はずれ...
    ちなみに答えは 0 です (笑)

*/

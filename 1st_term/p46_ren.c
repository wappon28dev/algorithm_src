// p46_ren: practice `while` syntax
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandom(){
    // return 5;
	srand((unsigned int)time(NULL));
    return rand() % 10;
}

int main(void) {

    int num = 0;
    int ans = getRandom();
    int loopingNum = 1;

    printf("数はなんでしょ？ > ");
    scanf("%d", &num);
    while(num != ans){
        if (num > ans){
            printf("もっと小さくなれよ！\n");
        } else {
            printf("もっと大きくなれよ！\n");
        }
        printf("もう一度試そう > "); scanf("%d", &num);
        loopingNum++;
    }

    printf("あたり！！！ (%d回目) 答えは, %d でした！！！", loopingNum, ans);

    return 0;

}

/*
入力：

    数はなんでしょ？ > 5

出力：

    あたり！！！(1回目) 答えは, 5 でした！！！

*/

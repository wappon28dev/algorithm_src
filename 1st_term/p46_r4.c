// p46_r4: practice `while` syntax
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandom(){
	srand((unsigned int)time(NULL));
    return rand() % 10;
}

int main(void) {

    int num;
    int ans = getRandom();

    printf("数はなんでしょ？ > ");
    scanf("%d", &num);
    while(num != ans){
        if (num > ans){
            printf("もっと小さくなれよ！\n");
        } else {
            printf("もっと大きくなれよ！\n");
        }
        printf("もう一度試そう > "); scanf("%d", &num);
    }

    printf("あたり！！！　答えは, %d でした！！！", ans);

    return 0;

}

/*
入力：

    数はなんでしょ？ > 15

出力：

    もっと小さくなれよ！

*/

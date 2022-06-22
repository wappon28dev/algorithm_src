// p42_ren: create multi `if` architecture
#include <stdio.h>

int adultFee = 200;

int main(void) {
    int age;
    int fee;

    printf("年齢を入力 > "); scanf("%d", &age);
    
    if (age < 6){

        int withParent;
        printf("同伴者はいますか？ (いる : 0, いない : 1) > ");
        scanf("%d", &withParent);
        if (withParent == 0){
            fee = adultFee / 2;
        } else {
            fee = 0;
        }

    } else if (age < 12){
        fee = adultFee / 2;
    } else {
        fee = adultFee;
    }

    printf("料金は, %d円です", fee);

    return 0;

}


/*
入力：

    年齢を入力 > 12

出力 : 

    料金は, 200円です

*/

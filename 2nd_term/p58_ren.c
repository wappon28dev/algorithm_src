// p58_ren: Array test 
#include <stdio.h>

int main(void) {

    int lastDates[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int lastMonth = 0;
    do {

        printf("1Œ‚©‚ç‘«‚µ‡‚í‚¹‚éŒ‚ğ“ü—Í > ");
        scanf("%d", &lastMonth);

    } while (lastMonth > 12);

    int i, sum;
    for (i = 0; i < lastMonth; i++){
        sum += lastDates[i];
    }

    printf("1Œ‚©‚ç%dŒ‚Ì‡Œv: %d\n", lastMonth, sum);

    return 0;

}

/*
o—Í : 

    1Œ‚©‚ç‘«‚µ‡‚í‚¹‚éŒ‚ğ“ü—Í > 18
    1Œ‚©‚ç‘«‚µ‡‚í‚¹‚éŒ‚ğ“ü—Í > 12
    1Œ‚©‚ç12Œ‚Ì‡Œv: 365

*/

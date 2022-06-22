// p47_r5: practice `while` syntax
#include <stdio.h>

int main(void) {

    int target = 1000;
    int amount, total, days;

    do {
        printf("1“ú‚É‰½‰~’™‹à‚·‚éH > "); scanf("%d", &amount);
        total += amount;
        days++;
    } while (total <= target);
        printf("%d ‰~’™‚Ü‚é‚Ü‚Å‚É...\n", total);
        printf("“ú”: %d “ú\n", days);
        printf("•½‹Ï: %6.1f ‰~/“ú\n", float(total));

    return 0;

}

/*
“ü—ÍF

    1“ú‚É‰½‰~’™‹à‚·‚éH > 500
    1“ú‚É‰½‰~’™‹à‚·‚éH > 200
    1“ú‚É‰½‰~’™‹à‚·‚éH > 600

o—ÍF

    1300 ‰~’™‚Ü‚é‚Ü‚Å‚É...
    “ú”: 3 “ú
    •½‹Ï: 1300.0 ‰~/“ú

*/

#include <stdio.h>
#include <string.h>

#define PLAYER_LENGTH 3
#define PLAYER_NAME_LENGTH 16

struct PLAYER
{
    int index;
    char name[PLAYER_NAME_LENGTH];
    float battingRate;
} PLAYERS[PLAYER_LENGTH] = {
    {8, "Suzuki", 0.356},
    {1, "Nagashima", 0.316},
    {4, "Yamazaki", 0.302},
};

int main(void)
{

    int i;

    printf("î‘çÜ\t ñºëO\t ë≈ó¶\n");

    for (i = 0; i < PLAYER_LENGTH; i++)
    {
        printf("%d\t %s\t %.3f\n", PLAYERS[i].index, PLAYERS[i].name, PLAYERS[i].battingRate);
    }

    return 0;
}

/*
èoóÕ:

    î‘çÜ     ñºëO    ë≈ó¶
    8        Suzuki  0.356
    1        Nagashima       0.316
    4        Yamazaki        0.302

*/

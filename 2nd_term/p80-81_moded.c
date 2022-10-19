#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SIZE 4
#define TIMES 10
#define GUESS_MARK 'G'
#define ANSWER_MARK 'A'

// guess  ->  -1
// answer ->  -2

char Answer[SIZE + 10];
char Guess[SIZE + 10];

void init()
{
    int ans;
    int i;

    srand((unsigned int)time(NULL));

    for (i = 0; i < SIZE; i++)
    {
        do
        {
            ans = rand() % 10;
        } while (strchr(Answer, ans) != NULL);
    }
}

int evaluate()
{
    int hit = 0;
    int blow = 0;
    int cpa[SIZE];
    int cpg[SIZE];

    int i, j;

    strncpy(cpa, Answer, SIZE);
    strncpy(cpg, Guess, SIZE);

    for (i = 0; i < SIZE; i++)
    {
        if (cpg[i] == cpa[i])
        {
            hit++;
            cpg[i] = GUESS_MARK;
            cpa[i] = ANSWER_MARK;
        }
    }
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            if (i != j && cpg[j] == cpa[i])
            {
                blow++;
                cpg[j] = GUESS_MARK;
                cpa[i] = ANSWER_MARK;
            }
        }
    }
    printf("Hit: %d , Blow: %d \n", hit, blow);
    return hit;
}

int main(void)
{
    int hit = 0;
    int n = 0;

    init();

    do
    {
        n++;
        printf("number => ");
        scanf("%s", &Guess);
        hit = evaluate();

    } while ((hit < SIZE) && (n < TIMES));
    if (hit == SIZE)
    {
        printf("³‰ð‚È‚Ì‚¾I");
    }
    else
    {
        printf("GAME OVER\n³‰ð‚Í, %d ‚Å‚µ‚½", Answer);
    }
    return 0;
}
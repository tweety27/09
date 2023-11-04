#include <stdio.h>
#include <stdlib.h>

#define N_STUDENT 5
int main(int argc, char *argv[])
{
    int grade[N_STUDENT];
    int i, average;
    int sum;

    sum = 0;

    printf("input 5 scores: \n");

    for(i = 0; i < N_STUDENT; i++)
    {
        scanf("%d", &grade[i]);
        sum += grade[i];
    }

    average = sum / N_STUDENT;
    printf("score average : %i\n", average);

    return 0;
}

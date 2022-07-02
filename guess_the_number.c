#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess, no_guess = 1;
    srand(time(0));
    int num = rand() % 100 + 1;
    // printf("%d\n", num);
    do
    {
        printf("Guess the number : ");
        scanf("%d", &guess);
        if (guess < num)
        {
            printf("Higher number please!!\n");
        }
        else if (guess > num)
        {
            printf("Lower number please!!\n");
        }
        else
        {
            printf("You have guessed the right number yaayy!!!\n");
            printf("You have taken %d tries\n", no_guess);
        }
        no_guess++;
    } while (guess != num);

    return 0;
}

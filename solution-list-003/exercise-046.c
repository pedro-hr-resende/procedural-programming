/* Author: Pedro Henrique Resende Ribeiro
 * Description: Guess a number
 * Date: 2023-03-13 - Hour: 20:35
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int number, counter, guess;

    srand(time(NULL));

    number = (rand() % 1000) + 1;
    counter = 0;

    while(1) {

        counter++;

        printf("Enter a number: ");
        scanf("%d", &guess);

        if (number == guess) {

            printf("Congratulations, you got it right\n");
            printf("Number of attempts: %d\n", counter);

            break;

        } else {

            if (number > guess) {

                printf("The number is bigger\n");

            } else {

                printf("The number is less\n");

            }

        }

        printf("\n");

    }

    return 0;

}

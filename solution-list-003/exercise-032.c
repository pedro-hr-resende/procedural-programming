/* Author: Pedro Henrique Resende Ribeiro
 * Description: Dice rolls
 * Date: 2023-03-05 - Hour: 22:00
 */

#include <stdio.h>

int main() {

    int number, d1, d2, i;

    srand(time(NULL));

    printf("Enter the number of launches: ");
    scanf("%d", &number);

    printf("\n");

    for (i = 0; i < number; i++) {

        d1 = (rand() % 5) + 1;
        d2 = (rand() % 5) + 1;

        printf("Result 1: %d\n", d1);
        printf("Result 2: %d\n", d2);

        if (d1 > d2) {

            printf("%d > %d\n", d1, d2);

        } else if (d1 < d2) {

            printf("%d < %d\n", d1, d2);

        } else {

            printf("%d = %d\n", d1, d2);

        }

    }

    return 0;

}

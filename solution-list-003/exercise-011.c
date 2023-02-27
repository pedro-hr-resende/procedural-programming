/* Author: Pedro Henrique Resende Ribeiro
 * Description: Ascending order from 1 to n
 * Date: 2023-02-26 - Hour: 22:05
 */

#include <stdio.h>

int main() {

    int i, number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {

        printf("Invalid number\n");

    }

    printf("Ascending order\n");

    for (i = 1; i <= number; i++) {

        printf("%d\t", i);

        if (i % 10 == 0) {

            printf("\n");

        }

    }

    return 0;

}

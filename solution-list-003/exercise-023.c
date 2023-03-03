/* Author: Pedro Henrique Resende Ribeiro
 * Description: Divisors of a positive number
 * Date: 2023-03-02 - Hour: 22:45
 */

#include <stdio.h>

int main() {

    int number, i;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    printf("Divisors: ");

    for (i = 1; i <= number; i++) {

        if (number % i == 0) {

            printf("%d; ", i);

        }

    }

    printf("\n");

    return 0;

}

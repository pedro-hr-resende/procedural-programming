/* Author: Pedro Henrique Resende Ribeiro
 * Description: Ascending order of odd numbers
 * Date: 2023-02-26 - Hour: 22:20
 */

#include <stdio.h>

int main() {

    int i, number;

    printf("Enter an odd positive integer: ");
    scanf("%d", &number);

    if (number <= 0 || number % 2 == 0) {

        printf("Invalid number\n");
        return -1;

    }

    printf("Ascending order\n");

    for (i = 1; i <= number; i += 2) {

        printf("%d\t", i);

        if (i % 10 == 9) {

            printf("\n");

        }

    }

    return 0;

}

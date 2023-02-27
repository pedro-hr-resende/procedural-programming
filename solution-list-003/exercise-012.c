/* Author: Pedro Henrique Resende Ribeiro
 * Description: Descending order from n to 1
 * Date: 2023-02-26 - Hour: 22:10
 */

#include <stdio.h>

int main() {

    int i, number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {

        printf("Invalid number\n");

    }

    printf("Descending order\n");

    for (i = number; i >= 1; i--) {

        printf("%d\t", i);

        if (i % 10 == 1) {

            printf("\n");

        }

    }

    return 0;

}

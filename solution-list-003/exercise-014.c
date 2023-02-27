/* Author: Pedro Henrique Resende Ribeiro
 * Description: Descending order of even numbers
 * Date: 2023-02-26 - Hour: 22:18
 */

#include <stdio.h>

int main() {

    int i, number;

    printf("Enter an even positive integer: ");
    scanf("%d", &number);

    if (number <= 0 || number % 2 != 0) {

        printf("Invalid number\n");
        return -1;

    }

    printf("Descending order\n");

    for (i = number; i >= 2; i -= 2) {

        printf("%d\t", i);

        if (i % 10 == 2) {

            printf("\n");

        }

    }

    return 0;

}

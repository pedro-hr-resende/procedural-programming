/* Author: Pedro Henrique Resende Ribeiro
 * Description: Descending order of odd numbers
 * Date: 2023-02-28 - Hour: 21:15
 */

#include <stdio.h>

int main() {

    int i, number, counter;

    printf("Enter an odd positive integer: ");
    scanf("%d", &number);

    if (number <= 0 || number % 2 == 0) {

        printf("Invalid number\n");
        return -1;

    }

    printf("Descending order\n");

    counter = 1;

    for (i = number; i >= 1; i -= 2) {

        counter++;

        printf("%d\t", i);

        if (counter == 5) {

            printf("\n");
            counter = 1;

        }

    }

    return 0;

}

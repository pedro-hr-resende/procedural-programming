/* Author: Pedro Henrique Resende Ribeiro
 * Description: Quantity of even numbers
 * Date: 2023-02-28 - Hour: 22:15
 */

#include <stdio.h>

int main() {

    int number, counter, even;

    even = 0;
    counter = 0;

    do {

        printf("Enter a number: ");
        scanf("%d", &number);

        if (number % 2 == 0) {

            even++;

        }

        counter++;

    } while (number != 1000);

    printf("\n");

    printf("Number of numbers read: %d\n", counter);
    printf("Number of even numbers: %d\n", even);

    return 0;

}

/* Author: Pedro Henrique Resende Ribeiro
 * Description: Higher number
 * Date: 2023-02-28 - Hour: 21:38
 */

#include <stdio.h>

int main() {

    int i, number, aux, higher, counter;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {

        printf("Invalid number\n");
        return -1;

    }

    printf("\n");

    printf("Enter a number: ");
    scanf("%d", &aux);

    higher = aux;
    counter = 1;

    for (i = 1; i < number; i++) {

        printf("Enter a number: ");
        scanf("%d", &aux);

        if (aux > higher) {

            higher = aux;
            counter = 1;

        } else if (aux == higher) {

            counter++;

        }

    }

    printf("\n");

    printf("The higher is: %d\n", higher);
    printf("It has been typed %d times\n", counter);

    return 0;

}

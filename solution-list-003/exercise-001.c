/* Author: Pedro Henrique Resende Ribeiro
 * Description: Multiples of three
 * Date: 2023-02-24 - Hour: 20:50
 */

#include <stdio.h>

int main() {

    int i, counter;

    i = 1;
    counter = 0;

    printf("First five multiples of three: ");

    do {

        if (i % 3 == 0) {

            counter++;
            printf("%d; ", i);

        }

        i++;

    } while (counter < 5);

    printf("\n");

    return 0;

}

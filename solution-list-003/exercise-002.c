/* Author: Pedro Henrique Resende Ribeiro
 * Description: Print from 1 to 100
 * Date: 2023-02-24 - Hour: 21:00
 */

#include <stdio.h>

int main() {

    int i;

    for (i = 1; i <= 100; i++) {

        printf("%d\t", i);

        if (i % 10 == 0) {

            printf("\n");

        }

    }

    printf("\n");

    i = 1;

    while (i <= 100) {

        printf("%d\t", i);

        if (i % 10 == 0) {

            printf("\n");

        }

        i++;

    }

    printf("\n");

    i = 1;

    do {

        printf("%d\t", i);

        if (i % 10 == 0) {

            printf("\n");

        }

        i++;

    } while (i <= 100);

    return 0;

}

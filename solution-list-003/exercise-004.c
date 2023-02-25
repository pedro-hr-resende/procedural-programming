/* Author: Pedro Henrique Resende Ribeiro
 * Description: Print from 0 to 100000 by 1000
 * Date: 2023-02-24 - Hour: 21:30
 */

#include <stdio.h>

int main() {

    int i, counter;

    i = 0;
    counter = 1;

    while (i <= 100000) {

        printf("%d\t", i);

        if (counter == 10) {

            printf("\n");
            counter = 0;

        }

        i += 1000;
        counter++;

    }

    printf("\n");

    return 0;

}

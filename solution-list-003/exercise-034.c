/* Author: Pedro Henrique Resende Ribeiro
 * Description: Number divisible from 1 to 20
 * Date: 2023-03-05 - Hour: 22:20
 */

#include <stdio.h>

int main() {

    int number, counter, i, j;

    number = 20;
    j = number - 1;

    do {

        counter = 0;
        j++;

        for (i = 1; i <= number; i++) {

            if (j % i == 0) {

                counter++;

            }

        }

    } while (counter < number);

    printf("The number divisible from 1 to %d is: %d\n", number, j);

    return 0;

}

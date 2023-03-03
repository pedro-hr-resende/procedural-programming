/* Author: Pedro Henrique Resende Ribeiro
 * Description: Sum of numbers under 1000 that are multiples of 3 or 5
 * Date: 2023-03-02 - Hour: 22:55
 */

#include <stdio.h>

int main() {

    int sum, i;

    sum = 0;

    for (i = 1; i < 1000; i++) {

        if (i % 3 == 0 || i % 5 == 0) {

            sum += i;

        }

    }

    printf("The sum of multiples is: %d\n", sum);

    return 0;

}

/* Author: Pedro Henrique Resende Ribeiro
 * Description: Sum of the first 50 even numbers
 * Date: 2023-02-25 - Hour: 18:55
 */

#include <stdio.h>

int main() {

    int i, counter, sum;

    i = 2;
    sum = 0;
    counter = 0;

    while (counter < 50) {

        sum += i;
        i += 2;
        counter++;

    }

    printf("The sum of the first 50 even numbers is: %d\n", sum);

    return 0;

}

/* Author: Pedro Henrique Resende Ribeiro
 * Description: Sum of divisors of a positive number
 * Date: 2023-03-02 - Hour: 22:52
 */

#include <stdio.h>

int main() {

    int number, sum, i;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    sum = 0;

    for (i = 1; i < number; i++) {

        if (number % i == 0) {

            sum += i;

        }

    }

    printf("The sum of divisors is: %d\n", sum);

    return 0;

}

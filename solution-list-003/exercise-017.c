/* Author: Pedro Henrique Resende Ribeiro
 * Description: Sum of the first n natural numbers
 * Date: 2023-02-28 - Hour: 21:20
 */

#include <stdio.h>

int main() {

    int i, number, sum;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {

        printf("Invalid number\n");
        return -1;

    }

    sum = 0;

    for (i = 1; i <= number; i++) {

        sum += i;

    }

    printf("The sum is: %d\n", sum);

    return 0;

}

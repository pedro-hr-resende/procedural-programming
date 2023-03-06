/* Author: Pedro Henrique Resende Ribeiro
 * Description: Harmonic sum
 * Date: 2023-03-05 - Hour: 20:40
 */

#include <stdio.h>

int main() {

    int number, i;
    float sum;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number <= 0) {

        printf("Invalid number\n");
        return -1;

    }

    sum = 0.0;

    for (i = 1; i <= number; i++) {

        sum += 1.0 / (float)i;

    }

    printf("The harmonic sum is: %.2f\n", sum);

    return 0;

}

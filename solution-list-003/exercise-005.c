/* Author: Pedro Henrique Resende Ribeiro
 * Description: Sum of ten numbers
 * Date: 2023-02-24 - Hour: 21:40
 */

#include <stdio.h>

int main() {

    int i;
    float number, sum;

    sum = 0.0;

    for (i = 0; i < 10; i++) {

        printf("Enter a number: ");
        scanf("%f", &number);

        sum += number;

    }

    printf("The sum of the 10 numbers is: %.1f\n", sum);

    return 0;

}

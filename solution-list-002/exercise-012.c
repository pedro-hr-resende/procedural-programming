/* Author: Pedro Henrique Resende Ribeiro
 * Description: Logarithm of a number
 * Date: 2023-02-15 - Hour: 21:20
 */

#include <stdio.h>
#include <math.h>

int main() {

    float number, logarithm;

    printf("Enter a number: ");
    scanf("%f", &number);

    if (number > 0) {

        logarithm = log(number);
        printf("The natural logarithm is: %.2f\n", logarithm);

        logarithm = log10(number);
        printf("The base 10 logarithm is: %.2f\n", logarithm);

    } else {

        printf("The number is invalid\n");

    }

    return 0;

}

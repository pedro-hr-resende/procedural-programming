/* Author: Pedro Henrique Resende Ribeiro
 * Description: Sum of squares
 * Date: 2023-02-10 - Hour: 20:10
 */

#include <stdio.h>
#include <math.h>

int main() {

    float number1, number2, number3, sum;

    printf("Enter the 1st number: ");
    scanf("%f", &number1);

    printf("Enter the 2nd number: ");
    scanf("%f", &number2);

    printf("Enter the 3rd number: ");
    scanf("%f", &number3);

    sum = pow(number1, 2.0) + pow(number2, 2.0) + pow(number3, 2.0);

    printf("The sum of squares is: %.2f\n", sum);

    return 0;

}

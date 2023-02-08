/* Author: Pedro Henrique Resende Ribeiro
 * Description: Square of a real number
 * Date: 2023-02-07 - Hour: 22:00
 */

#include <stdio.h>
#include <math.h>

int main() {

    float number, square;

    printf("Enter a real number: ");
    scanf("%f", &number);

    square = number * number;

    printf("The square of the real number is: %.2f\n", square);
    printf("The square using pow() of math.h is: %.2f\n", pow(number, 2.0));

    return 0;

}

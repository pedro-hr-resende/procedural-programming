/* Author: Pedro Henrique Resende Ribeiro
 * Description: Square, cube and square root
 * Date: 2023-03-12 - Hour: 23:20
 */

#include <stdio.h>
#include <math.h>

int main() {

    float number, result;

    printf("Enter the number: ");
    scanf("%f", &number);

    while (number > 0.0) {

        result = pow(number, 2.0);

        printf("Square: %.2f\n", result);

        result = pow(number, 3.0);

        printf("Cube: %.2f\n", result);

        result = sqrt(number);

        printf("Square root: %.2f\n", result);

        printf("\n");

        printf("Enter the number: ");
        scanf("%f", &number);

    }

    return 0;

}

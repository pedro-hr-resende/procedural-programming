/* Author: Pedro Henrique Resende Ribeiro
 * Description: Calculate the hypotenuse of a triangle
 * Date: 2023-02-11 - Hour: 19:12
 */

#include <stdio.h>
#include <math.h>

int main() {

    float a, b, hypotenuse;

    printf("Enter the side A: ");
    scanf("%f", &a);

    printf("Enter the side B: ");
    scanf("%f", &b);

    hypotenuse = sqrt(pow(a, 2.0) + pow(b, 2.0));

    printf("The hypotenuse is: %.2f\n", hypotenuse);

    return 0;

}

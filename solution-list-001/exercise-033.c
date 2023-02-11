/* Author: Pedro Henrique Resende Ribeiro
 * Description: Area of a square
 * Date: 2023-02-11 - Hour: 19:05
 */

#include <stdio.h>
#include <math.h>

int main() {

    float side, area;

    printf("Enter the side of a square: ");
    scanf("%f", &side);

    area = pow(side, 2.0);

    printf("The area is: %.2f\n", area);

    return 0;

}

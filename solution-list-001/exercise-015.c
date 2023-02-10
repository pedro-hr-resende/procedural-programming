/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from radians to radians
 * Date: 2023-02-09 - Hour: 20:16
 */

#include <stdio.h>

#define PI 3.14

int main() {

    float degrees, radians;

    printf("Enter an angle in radians: ");
    scanf("%f", &radians);

    degrees = radians * 180.0 / PI;

    printf("The angle in degrees is: %.2f\n", degrees);

    return 0;

}

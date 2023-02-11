/* Author: Pedro Henrique Resende Ribeiro
 * Description: Area of a circle
 * Date: 2023-02-11 - Hour: 19:10
 */

#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main() {

    float radius, area;

    printf("Enter the radius of a circle: ");
    scanf("%f", &radius);

    area = PI * pow(radius, 2.0);

    printf("The area is: %.6f\n", area);

    return 0;

}

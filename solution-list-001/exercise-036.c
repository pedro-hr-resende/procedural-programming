/* Author: Pedro Henrique Resende Ribeiro
 * Description: Volume of a cylinder
 * Date: 2023-02-11 - Hour: 19:15
 */

#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main() {

    float radius, height, volume;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    volume = PI * pow(radius, 2.0) * height;

    printf("The volume is: %.2f\n", volume);

    return 0;

}

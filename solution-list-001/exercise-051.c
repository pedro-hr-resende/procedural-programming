/* Author: Pedro Henrique Resende Ribeiro
 * Description: Distance from a point to the origin
 * Date: 2023-02-13 - Hour: 21:35
 */

#include <stdio.h>
#include <math.h>

int main() {

    float x, y, distance;

    printf("Enter the x coordinate: ");
    scanf("%f", &x);

    printf("Enter the y coordinate: ");
    scanf("%f", &y);

    distance = sqrt(pow(x, 2.0) + pow(y, 2.0));

    printf("The distance from the origin is: %.2f\n", distance);

    return 0;

}

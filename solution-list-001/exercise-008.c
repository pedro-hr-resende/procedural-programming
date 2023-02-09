/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from Kelvin to Celsius
 * Date: 2023-02-08 - Hour: 00:40
 */

#include <stdio.h>

int main() {

    float celsius, kelvin;

    printf("Enter a temperature in Kelvin: ");
    scanf("%f", &kelvin);

    celsius = kelvin - 273.15;

    printf("The temperature in Celsius is: %.2f\n", celsius);

    return 0;

}

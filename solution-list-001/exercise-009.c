/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from Celsius to Kelvin
 * Date: 2023-02-08 - Hour: 00:40
 */

#include <stdio.h>

int main() {

    float celsius, kelvin;

    printf("Enter a temperature in Celsius: ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;

    printf("The temperature in Kelvin is: %.2f\n", kelvin);

    return 0;

}

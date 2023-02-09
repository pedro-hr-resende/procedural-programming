/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from Fahrenheit to Celsius
 * Date: 2023-02-08 - Hour: 00:40
 */

#include <stdio.h>

int main() {

    float celsius, fahrenheit;

    printf("Enter a temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = 5.0 * (fahrenheit - 32.0) / 9.0;

    printf("The temperature in Celsius is: %.2f\n", celsius);

    return 0;

}

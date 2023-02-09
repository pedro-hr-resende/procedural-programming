/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from Celsius to Fahrenheit
 * Date: 2023-02-08 - Hour: 00:40
 */

#include <stdio.h>

int main() {

    float celsius, fahrenheit;

    printf("Enter a temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * (9.0 / 5.0) + 32.0;

    printf("The temperature in Fahrenheit is: %.2f\n", fahrenheit);

    return 0;

}

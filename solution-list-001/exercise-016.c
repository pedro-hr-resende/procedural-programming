/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from inches to centimeters
 * Date: 2023-02-09 - Hour: 20:20
 */

#include <stdio.h>

int main() {

    float inches, centimeters;

    printf("Enter a length in inches: ");
    scanf("%f", &inches);

    centimeters = inches * 2.54;

    printf("The length in centimeters is: %.2f\n", centimeters);

    return 0;

}

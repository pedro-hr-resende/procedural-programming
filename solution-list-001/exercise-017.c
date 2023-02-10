/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from centimeters to inches
 * Date: 2023-02-09 - Hour: 20:24
 */

#include <stdio.h>

int main() {

    float inches, centimeters;

    printf("Enter a length in centimeters: ");
    scanf("%f", &centimeters);

    inches = centimeters / 2.54;

    printf("The length in inches is: %.2f\n", inches);

    return 0;

}

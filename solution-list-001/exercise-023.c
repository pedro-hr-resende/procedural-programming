/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from meters to yards
 * Date: 2023-02-09 - Hour: 20:36
 */

#include <stdio.h>

int main() {

    float yards, meters;

    printf("Enter a length in meters: ");
    scanf("%f", &meters);

    yards = meters / 0.91;

    printf("The length in yards is: %.2f\n", yards);

    return 0;

}

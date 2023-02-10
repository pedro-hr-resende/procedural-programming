/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from yards to meters
 * Date: 2023-02-09 - Hour: 20:34
 */

#include <stdio.h>

int main() {

    float yards, meters;

    printf("Enter a length in yards: ");
    scanf("%f", &yards);

    meters = yards * 0.91;

    printf("The length in meters is: %.2f\n", meters);

    return 0;

}

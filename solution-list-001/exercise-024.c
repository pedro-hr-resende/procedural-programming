/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from m2 to acres
 * Date: 2023-02-09 - Hour: 20:36
 */

#include <stdio.h>

int main() {

    float m2, acres;

    printf("Enter an area in m2: ");
    scanf("%f", &m2);

    acres = m2 * 0.000247;

    printf("The area in acres is: %.2f\n", acres);

    return 0;

}

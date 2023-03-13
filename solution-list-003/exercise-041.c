/* Author: Pedro Henrique Resende Ribeiro
 * Description: Association of resistors
 * Date: 2023-03-12 - Hour: 23:15
 */

#include <stdio.h>

int main() {

    float resistor1, resistor2, result;

    printf("Enter the resistor 1: ");
    scanf("%f", &resistor1);

    printf("Enter the resistor 2: ");
    scanf("%f", &resistor2);

    while (resistor1 > 0.0 && resistor2 > 0.0) {

        result = (resistor1 * resistor2) / (resistor1 + resistor2);

        printf("Result: %.2f\n", result);

        printf("\n");

        printf("Enter the resistor 1: ");
        scanf("%f", &resistor1);

        printf("Enter the resistor 2: ");
        scanf("%f", &resistor2);

    }

    return 0;

}

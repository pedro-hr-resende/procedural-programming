/* Author: Pedro Henrique Resende Ribeiro
 * Description: Cost of a car
 * Date: 2023-02-23 - Hour: 21:55
 */

 #include <stdio.h>

 int main() {

    float factoryCost, finalCost;

    printf("Enter the factory cost: ");
    scanf("%f", &factoryCost);

    if (factoryCost <= 12000.0) {

        finalCost = factoryCost * (1 + 0.05);

    } else if (factoryCost > 12000.0 && factoryCost <= 25000.0) {

        finalCost = factoryCost * (1 + 0.10 + 0.15);

    } else if (factoryCost > 25000.0) {

        finalCost = factoryCost * (1 + 0.15 + 0.20);

    }

    printf("Customer cost: %.2f\n", finalCost);

    return 0;

 }

/* Author: Pedro Henrique Resende Ribeiro
 * Description: Calculate commissions
 * Date: 2023-02-12 - Hour: 16:40
 */

#include <stdio.h>

int main() {

    float total;

    printf("Enter the total sale amount: ");
    scanf("%f", &total);

    printf("Discounted value: %.2f\n", total * 0.9);
    printf("Value divided by 3x: %.2f\n", total / 3.0);
    printf("Commission of discounted value: %.2f\n", (total * 0.9) * 0.05);
    printf("Commission of value divided by 3x: %.2f\n", total * 0.05);

    return 0;

}

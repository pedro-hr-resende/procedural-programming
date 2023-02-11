/* Author: Pedro Henrique Resende Ribeiro
 * Description: Discounted price of a product
 * Date: 2023-02-11 - Hour: 19:20
 */

#include <stdio.h>

int main() {

    float price, newPrice;

    printf("Enter the price of the product: ");
    scanf("%f", &price);

    newPrice = price * (1.00 - 0.12);

    printf("The new price is: %.2f\n", newPrice);

    return 0;

}

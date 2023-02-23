/* Author: Pedro Henrique Resende Ribeiro
 * Description: New product price
 * Date: 2023-02-21 - Hour: 22:50
 */

 #include <stdio.h>

 int main() {

    float price;

    printf("Enter the product price: ");
    scanf("%f", &price);

    if (price < 50.0) {

        printf("New price: RS %.2f\n", price * 1.05);

    } else if (price >= 50.0 && price <= 100.0) {

        printf("New price: RS %.2f\n", price * 1.10);

    } else {

        printf("New price: RS %.2f\n", price * 1.15);

    }

    return 0;

 }

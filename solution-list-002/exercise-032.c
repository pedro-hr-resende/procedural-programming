/* Author: Pedro Henrique Resende Ribeiro
 * Description: Restaurant menu
 * Date: 2023-02-21 - Hour: 21:35
 */

 #include <stdio.h>

 int main() {

    int code, quantity;

    printf("Enter the product code: ");
    scanf("%d", &code);

    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    switch (code) {

        case 100:

            printf("Hot dog: RS %.2f\n", quantity * 1.20);
            break;

        case 101:

            printf("Hamburger: RS %.2f\n", quantity * 1.30);
            break;

        case 102:

            printf("Hamburguer with egg: RS %.2f\n", quantity * 1.50);
            break;

        case 103:

            printf("Hamburguer with bacon: RS %.2f\n", quantity * 1.20);
            break;

        case 104:

            printf("Cheeseburguer: RS %.2f\n", quantity * 1.70);
            break;

        case 105:

            printf("Juice: RS %.2f\n", quantity * 2.20);
            break;

        case 106:

            printf("Soda: RS %.2f\n", quantity * 1.00);
            break;

        default:

            printf("Invalid code\n");

    }

    return 0;

 }

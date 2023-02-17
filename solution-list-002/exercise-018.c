/* Author: Pedro Henrique Resende Ribeiro
 * Description: Math operations
 * Date: 2023-02-16 - Hour: 21:38
 */

#include <stdio.h>

int main() {

    float number1, number2;
    int option;

    printf(" -------------------- \n");
    printf("|        Menu        |\n");
    printf("|--------------------|\n");
    printf("| 1 - Sum            |\n");
    printf("| 2 - Subtraction    |\n");
    printf("| 3 - Multiplication |\n");
    printf("| 4 - Division       |\n");
    printf(" -------------------- \n");

    printf("\n");

    printf("Option: ");
    scanf("%d", &option);

    printf("\n");

    printf("Enter the 1st number: ");
    scanf("%f", &number1);

    printf("Enter the 2nd number: ");
    scanf("%f", &number2);

    printf("\n");

    if (option == 4 && number2 == 0) {

        printf("Division cannot be done\n");
        return -1;

    }

    switch(option) {

        case 1:

            printf("The sum is: %.2f\n", number1 + number2);
            break;

        case 2:

            printf("The subtraction is: %.2f\n", number1 - number2);
            break;

        case 3:

            printf("The multiplication is: %.2f\n", number1 * number2);
            break;

        case 4:

            printf("The division is: %.2f\n", number1 / number2);
            break;

        default:

            printf("Invalid number\n");
            break;

    }

    return 0;

}

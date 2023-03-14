/* Author: Pedro Henrique Resende Ribeiro
 * Description: Math operations
 * Date: 2023-03-13 - Hour: 20:45
 */

#include <stdio.h>

int main() {

    float number1, number2;
    int option;

    printf(" -------------------- \n");
    printf("|       Options      |\n");
    printf("|--------------------|\n");
    printf("| 1 - Addition       |\n");
    printf("| 2 - Subtraction    |\n");
    printf("| 3 - Multiplication |\n");
    printf("| 4 - Division       |\n");
    printf("| 5 - Exit           |\n");
    printf(" -------------------- \n");

    do {

        printf("\n");

        printf("Option: ");
        scanf("%d", &option);

        if (option != 5) {

            printf("Enter the 1st number: ");
            scanf("%f", &number1);

            printf("Enter the 2nd number: ");
            scanf("%f", &number2);

        }

        switch (option) {

            case 1:

                printf("The sum is %.2f\n", number1 + number2);
                break;

            case 2:

                printf("The subtraction is %.2f\n", number1 - number2);
                break;

            case 3:

                printf("The multiplication is %.2f\n", number1 * number2);
                break;

            case 4:

                if (number2 == 0) {

                    printf("Denominator cannot be zero\n");
                    break;

                }

                printf("The division is %.2f\n", number1 / number2);
                break;

            case 5:

                printf("End of program\n");
                break;

            default:

                printf("Invalid option\n");

        }

    } while (option != 5);

    return 0;

}

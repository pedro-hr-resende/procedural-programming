/* Author: Pedro Henrique Resende Ribeiro
 * Description: Averages
 * Date: 2023-02-21 - Hour: 20:30
 */

 #include <stdio.h>
 #include <math.h>

 int main() {

    int number1, number2, number3;
    int option;
    float answer;

    printf(" ------------------------ \n");
    printf("|          Menu          |\n");
    printf("|------------------------|\n");
    printf("| 1 - Geometric average  |\n");
    printf("| 2 - Weighted average   |\n");
    printf("| 3 - Harmonic average   |\n");
    printf("| 4 - arithmetic average |\n");
    printf(" ------------------------ \n");

    printf("\n");

    printf("Option: ");
    scanf("%d", &option);

    printf("\n");

    if (option >= 1 && option <= 4) {

        printf("Enter the 1st number: ");
        scanf("%d", &number1);

        printf("Enter the 2nd number: ");
        scanf("%d", &number2);

        printf("Enter the 3rd number: ");
        scanf("%d", &number3);

    } else {

        printf("Invalid option\n");
        return -1;

    }

    printf("\n");

    switch (option) {

        case 1:

            answer = pow(number1 * number2 * number3, 1.0 / 3.0);

            printf("The geometric average is: %.2f\n", answer);
            break;

        case 2:

            answer = (number1 + 2.0 * number2 + 3.0 * number3) / 6.0;

            printf("The weighted average is: %.2f\n", answer);
            break;

        case 3:

            answer = 1.0 / ((1.0 / number1) + (1.0 / number2) + (1.0 / number3));

            printf("The harmonic average is: %.2f\n", answer);
            break;

        case 4:

            answer = (number1 + number2 + number3) / 3.0;

            printf("The arithmetic average is: %.2f\n", answer);
            break;

    }

    return 0;

 }

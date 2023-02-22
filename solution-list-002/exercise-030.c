/* Author: Pedro Henrique Resende Ribeiro
 * Description: Ascending order
 * Date: 2023-02-21 - Hour: 21:00
 */

 #include <stdio.h>

 int main() {

    float number1, number2, number3;

    printf("Enter the 1st number: ");
    scanf("%f", &number1);

    printf("Enter the 2nd number: ");
    scanf("%f", &number2);

    printf("Enter the 3rd number: ");
    scanf("%f", &number3);

    if (number1 <= number2 &&
        number2 <= number3) {

        printf("Ascending order: %.2f | %.2f | %.2f\n", number1, number2, number3);

    } else if (number1 <= number3 &&
               number3 <= number2) {

        printf("Ascending order: %.2f | %.2f | %.2f\n", number1, number3, number2);

    } else if (number2 <= number1 &&
               number1 <= number3) {

        printf("Ascending order: %.2f | %.2f | %.2f\n", number2, number1, number3);

    } else if (number2 <= number3 &&
               number3 <= number1) {

        printf("Ascending order: %.2f | %.2f | %.2f\n", number2, number3, number1);

    } else if (number3 <= number1 &&
               number1 <= number2) {

        printf("Ascending order: %.2f | %.2f | %.2f\n", number3, number1, number2);

    } else {

        printf("Ascending order: %.2f | %.2f | %.2f\n", number3, number2, number1);

    }

    return 0;

 }

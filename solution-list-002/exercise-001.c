/* Author: Pedro Henrique Resende Ribeiro
 * Description: Show the greater number
 * Date: 2023-02-14 - Hour: 20:15
 */

#include <stdio.h>

int main() {

    float number1, number2;

    printf("Enter the 1st number: ");
    scanf("%f", &number1);

    printf("Enter the 2nd number: ");
    scanf("%f", &number2);

    if (number1 > number2) {

        printf("%.2f is greater than %.2f\n", number1, number2);

    } else if (number2 > number1) {

        printf("%.2f is greater than %.2f\n", number2, number1);

    } else {

        printf("The numbers are equals\n");

    }

    return 0;

}

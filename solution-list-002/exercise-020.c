/* Author: Pedro Henrique Resende Ribeiro
 * Description: Check if it is a triangle
 * Date: 2023-02-16 - Hour: 21:52
 */

#include <stdio.h>

int main() {

    int number1, number2, number3;

    printf("Enter the 1st side: ");
    scanf("%d", &number1);

    printf("Enter the 2nd side: ");
    scanf("%d", &number2);

    printf("Enter the 3rd side: ");
    scanf("%d", &number3);

    if (number1 > number2 + number3 ||
        number2 > number1 + number3 ||
        number3 > number1 + number2) {

        printf("It is not a triangle\n");
        return -1;

    }

    if (number1 == number2 && number2 == number3) {

        printf("It is an equilateral triangle\n");

    }

    if ((number1 == number2 && number2 != number3) ||
        (number1 == number3 && number3 != number2) ||
        (number2 == number3 && number3 != number1)) {

        printf("It is an isosceles triangle\n");

    }

    if (number1 != number2 &&
        number1 != number3 &&
        number2 != number3) {

        printf("It is an scalene triangle\n");

    }

    return 0;

}

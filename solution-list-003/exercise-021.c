/* Author: Pedro Henrique Resende Ribeiro
 * Description: Sum of evens and multiplication of odds
 * Date: 2023-03-02 - Hour: 22:35
 */

#include <stdio.h>

int main() {

    int number1, number2, i;
    int sum, multiplication;

    printf("Enter the 1st number: ");
    scanf("%d", &number1);

    printf("Enter the 2nd number: ");
    scanf("%d", &number2);

    sum = 0;
    multiplication = 1;

    for (i = number1; i <= number2; i++) {

        if (i % 2 == 0) {

            sum += i;

        } else {

            multiplication *= i;

        }

    }

    printf("The sum of even numbers is: %d\n", sum);
    printf("The multiplication of odd numbers is: %d\n", multiplication);

    return 0;

}

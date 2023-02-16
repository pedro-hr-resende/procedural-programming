/* Author: Pedro Henrique Resende Ribeiro
 * Description: Sum of the digits of a number
 * Date: 2023-02-15 - Hour: 20:50
 */

#include <stdio.h>

int main() {

    int number, digitSum;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    if (number > 0) {

        digitSum = 0;

        while (number > 0) {

            digitSum += number % 10;
            number /= 10;

        }

        printf("The sum of the digits is: %d\n", digitSum);

    } else {

        printf("The number is invalid\n");

    }

    return 0;

}

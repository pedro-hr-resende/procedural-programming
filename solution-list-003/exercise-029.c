/* Author: Pedro Henrique Resende Ribeiro
 * Description: Series with factorial
 * Date: 2023-03-05 - Hour: 20:50
 */

#include <stdio.h>

int main() {

    int number, factorial, i, j;
    float sum;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number <= 0) {

        printf("Invalid number\n");
        return -1;

    }

    sum = 0.0;

    for (i = 1; i < number; i++) {

        factorial = 1;

        for (j = 1; j <= 2 * i; j++) {

            factorial *= j;

        }

        sum += i / (float)factorial;

    }

    printf("The series sum is: %.2f\n", sum);

    return 0;

}

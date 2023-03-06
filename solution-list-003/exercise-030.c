/* Author: Pedro Henrique Resende Ribeiro
 * Description: Calculation of multiple series
 * Date: 2023-03-05 - Hour: 20:55
 */

#include <stdio.h>

int main() {

    int number, sum, i;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number <= 0) {

        printf("Invalid number\n");
        return -1;

    }

    sum = 0;

    for (i = 1; i <= number; i++) {

        sum += i;

    }

    printf("The sum of the 1st series is: %d\n", sum);

    sum = 0;

    for (i = 1; i <= 2 * number - 1; i++) {

        if (i % 2 == 0) {

            sum -= i;

        } else {

            sum += i;

        }

    }

    printf("The sum of the 2nd series is: %d\n", sum);

    sum = 0;

    for (i = 1; i <= 2 * number - 1; i += 2) {

        sum += i;

    }

    printf("The sum of the 3rd series is: %d\n", sum);

    return 0;

}

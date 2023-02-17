/* Author: Pedro Henrique Resende Ribeiro
 * Description: Divisible by 3 and/or 5
 * Date: 2023-02-16 - Hour: 21:48
 */

#include <stdio.h>

int main() {

    int number;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    if (number % 3 == 0 && number % 5 == 0) {

        printf("Number divisible by 3 and 5\n");
        return 0;

    }

    if (number % 3 == 0) {

        printf("Number divisible by 3\n");

    }

    if (number % 5 == 0) {

        printf("Number divisible by 5\n");

    }

    return 0;

}

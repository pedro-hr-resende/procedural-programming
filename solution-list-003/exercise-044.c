/* Author: Pedro Henrique Resende Ribeiro
 * Description: Fibonacci sequence
 * Date: 2023-03-12 - Hour: 23:35
 */

#include <stdio.h>

int main() {

    int number, f1, f2, f3;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number < 0) {

        printf("Invalid number\n");
        return -1;

    }

    printf("Fibonacci: 0 1 ");

    if (number == 0) {

        printf("\n");
        return 0;

    }

    f1 = 0;
    f2 = 1;
    f3 = 1;

    while (f3 <= number) {

        f3 = f1 + f2;

        printf("%d ", f3);

        f1 = f2;
        f2 = f3;

    }

    printf("\n");

    return 0;

}

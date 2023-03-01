/* Author: Pedro Henrique Resende Ribeiro
 * Description: Digits of a number
 * Date: 2023-02-28 - Hour: 21:45
 */

#include <stdio.h>
#include <math.h>

int main() {

    int i, number, digit;

    printf("Enter a number between 100 and 999: ");
    scanf("%d", &number);

    if (number < 100 || number > 999) {

        printf("Invalid number\n");
        return -1;

    }

    printf("Digits of the number: ");

    for (i = 2; i >= 0; i--) {

        digit = number / (int)pow(10.0, i);
        number -= digit * (int)pow(10.0, i);

        printf("%d; ", digit);

    }

    printf("\n");

    return 0;

}

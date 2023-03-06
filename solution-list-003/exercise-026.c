/* Author: Pedro Henrique Resende Ribeiro
 * Description: Multiple of 11, 13 or 17
 * Date: 2023-03-05 - Hour: 20:30
 */

#include <stdio.h>

int main() {

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number % 11 != 0 &&
           number % 13 != 0 &&
           number % 17 != 0) {

        number++;

    }

    printf("The multiple is: %d\n", number);

    return 0;

}

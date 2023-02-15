/* Author: Pedro Henrique Resende Ribeiro
 * Description: Even or odd
 * Date: 2023-02-14 - Hour: 20:32
 */

#include <stdio.h>

int main() {

    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {

        printf("The number is even\n");

    } else {

        printf("The number is odd\n");

    }

    return 0;

}

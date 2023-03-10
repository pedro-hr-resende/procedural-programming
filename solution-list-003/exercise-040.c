/* Author: Pedro Henrique Resende Ribeiro
 * Description: Biggest and smallest number
 * Date: 2023-03-09 - Hour: 23:30
 */

#include <stdio.h>

int main() {

    int number, biggest, smallest;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    biggest = smallest = number;

    while (number >= 0) {

        printf("Enter an integer number: ");
        scanf("%d", &number);

        if (number < 0) {

            break;

        }

        if (number > biggest) {

            biggest = number;

        }

        if (number < smallest) {

            smallest = number;

        }

    }

    if (biggest < 0) {

        printf("\nNo numbers were read\n");

    } else {

        printf("\nThe smallest is %d and the biggest is %d\n", smallest, biggest);

    }

    return 0;

}

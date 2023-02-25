/* Author: Pedro Henrique Resende Ribeiro
 * Description: The largest and smallest number
 * Date: 2023-02-25 - Hour: 18:25
 */

#include <stdio.h>

int main() {

    float number, largest, smallest;
    int i;

    printf("Enter a number: ");
    scanf("%f", &number);

    largest = smallest = number;

    for (i = 1; i < 10; i++) {

        printf("Enter a number: ");
        scanf("%f", &number);

        if (number > largest) {

            largest = number;

        }

        if (number < smallest) {

            smallest = number;

        }

    }

    printf("The smallest number is: %.2f\n", smallest);
    printf("The largest number is: %.2f\n", largest);

    return 0;

}

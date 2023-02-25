/* Author: Pedro Henrique Resende Ribeiro
 * Description: Average of ten positive integers
 * Date: 2023-02-25 - Hour: 18:15
 */

#include <stdio.h>

int main() {

    int i, counter, number;
    float average;

    average = 0.0;
    counter = 0;

    while (counter < 10) {

        printf("Enter a number: ");
        scanf("%d", &number);

        if (number > 0) {

            average += (float)number;
            counter++;

        }

    }

    average /= 10.0;

    printf("The sum of the 10 numbers is: %.1f\n", average);

    return 0;

}

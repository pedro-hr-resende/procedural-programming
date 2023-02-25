/* Author: Pedro Henrique Resende Ribeiro
 * Description: Average of ten numbers
 * Date: 2023-02-25 - Hour: 18:05
 */

#include <stdio.h>

int main() {

    int i;
    float number, average;

    average = 0.0;

    for (i = 0; i < 10; i++) {

        printf("Enter a number: ");
        scanf("%f", &number);

        average += number;

    }

    average /= 10.0;

    printf("The sum of the 10 numbers is: %.1f\n", average);

    return 0;

}

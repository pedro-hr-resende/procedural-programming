/* Author: Pedro Henrique Resende Ribeiro
 * Description: Calculate square root and number squared
 * Date: 2023-02-14 - Hour: 20:30
 */

#include <stdio.h>
#include <math.h>

int main() {

    float number, answer;

    printf("Enter the number: ");
    scanf("%f", &number);

    if (number > 0) {

        answer = pow(number, 2.0);
        printf("The number squared is: %.2f\n", answer);

        answer = sqrt(number);
        printf("The square root is: %.2f\n", answer);

    } else {

        printf("The number is zero or negative\n");

    }

    return 0;

}

/* Author: Pedro Henrique Resende Ribeiro
 * Description: Calculate square root or number squared
 * Date: 2023-02-14 - Hour: 20:25
 */

#include <stdio.h>
#include <math.h>

int main() {

    float number, answer;

    printf("Enter the number: ");
    scanf("%f", &number);

    if (number > 0) {

        answer = sqrt(number);
        printf("The square root is: %.2f\n", answer);

    } else {

        answer = pow(number, 2.0);
        printf("The number squared is: %.2f\n", answer);

    }

    return 0;

}

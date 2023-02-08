/* Author: Pedro Henrique Resende Ribeiro
 * Description: Fifth part of a real number
 * Date: 2023-02-07 - Hour: 22:00
 */

#include <stdio.h>

int main() {

    float number, answer;

    printf("Enter a real number: ");
    scanf("%f", &number);

    answer = number / 5.0;

    printf("The fifth part of the real number is: %.2f\n", answer);

    return 0;

}

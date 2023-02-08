/* Author: Pedro Henrique Resende Ribeiro
 * Description: Sum of three integers
 * Date: 2023-02-07 - Hour: 22:00
 */

#include <stdio.h>

int main() {

    int number1, number2, number3, sum;

    printf("Enter the 1st integer: ");
    scanf("%d", &number1);

    printf("Enter the 2nd integer: ");
    scanf("%d", &number2);

    printf("Enter the 3rd integer: ");
    scanf("%d", &number3);

    sum = number1 + number2 + number3;

    printf("The sum is: %d\n", sum);

    return 0;

}

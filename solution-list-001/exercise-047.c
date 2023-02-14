/* Author: Pedro Henrique Resende Ribeiro
 * Description: Print one digit per line
 * Date: 2023-02-13 - Hour: 21:00
 */

#include <stdio.h>

int main() {

    int number;
    int digit1, digit2, digit3, digit4;

    printf("Enter a four digit number: ");
    scanf("%d", &number);

    digit1 = number % 10;
    digit2 = ((number % 100) - digit1) / 10;
    digit3 = ((number % 1000) - digit2 * 10 - digit1) / 100;
    digit4 = ((number % 10000) - digit3 * 100 - digit2 * 10 - digit1) / 1000;

    printf("%d\n", digit4);
    printf("%d\n", digit3);
    printf("%d\n", digit2);
    printf("%d\n", digit1);

    return 0;

}

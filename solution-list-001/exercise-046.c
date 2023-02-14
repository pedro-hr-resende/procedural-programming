/* Author: Pedro Henrique Resende Ribeiro
 * Description: Inverted the digits of a number
 * Date: 2023-02-13 - Hour: 20:50
 */

#include <stdio.h>

int main() {

    int number, invertedNumber;
    int digit1, digit2, digit3;

    printf("Enter a three digit number: ");
    scanf("%d", &number);

    digit1 = number % 10;
    digit2 = ((number % 100) - digit1) / 10;
    digit3 = ((number % 1000) - digit2 * 10 - digit1) / 100;

    invertedNumber = digit1 * 100 + digit2 * 10 + digit3;

    printf("The inverted number is: %d\n", invertedNumber);

    return 0;

}

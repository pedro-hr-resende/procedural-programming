/* Author: Pedro Henrique Resende Ribeiro
 * Description: The greater number and the difference between them
 * Date: 2023-02-14 - Hour: 20:38
 */

#include <stdio.h>

int main() {

    int number1, number2;

    printf("Enter the 1st number: ");
    scanf("%d", &number1);

    printf("Enter the 2nd number: ");
    scanf("%d", &number2);

    if (number1 > number2) {

        printf("%d is greater than %d\n", number1, number2);
        printf("The difference between them is %d\n", number1 - number2);

    } else if (number2 > number1) {

        printf("%d is greater than %d\n", number2, number1);
        printf("The difference between them is %d\n", number2 - number1);

    } else {

        printf("The numbers are equals\n");

    }

    return 0;

}

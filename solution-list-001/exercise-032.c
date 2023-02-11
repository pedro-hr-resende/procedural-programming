/* Author: Pedro Henrique Resende Ribeiro
 * Description: Sum of successor of triple and predecessor of double
 * Date: 2023-02-11 - Hour: 19:00
 */

#include <stdio.h>

int main() {

    int number, predecessor, sucessor;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    predecessor = (number * 3) + 1;
    sucessor = (number * 2) - 1;

    printf("The sum is: %d\n", predecessor + sucessor);

    return 0;

}

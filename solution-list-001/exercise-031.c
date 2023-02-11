/* Author: Pedro Henrique Resende Ribeiro
 * Description: Predecessor and successor of a number
 * Date: 2023-02-11 - Hour: 18:55
 */

#include <stdio.h>

int main() {

    int number;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    printf("The predecessor is: %d\n", number - 1);
    printf("The sucessor is: %d\n", number + 1);

    return 0;

}

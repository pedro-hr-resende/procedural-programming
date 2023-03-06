/* Author: Pedro Henrique Resende Ribeiro
 * Description: Sum of the odd numbers
 * Date: 2023-03-05 - Hour: 22:40
 */

#include <stdio.h>

int main() {

    int start, finish, sum, i;

    printf("Enter the start of the range: ");
    scanf("%d", &start);

    printf("Enter the end of the range: ");
    scanf("%d", &finish);

    if (finish < start) {

        printf("Invalid range\n");
        return -1;

    }

    sum = 0;

    for (i = start; i <= finish; i++) {

        if (i % 2 != 0) {

            sum += i;

        }

    }

    printf("The sum of the odd numbers is: %d\n", sum);

    return 0;

}

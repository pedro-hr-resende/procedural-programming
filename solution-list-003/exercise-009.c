/* Author: Pedro Henrique Resende Ribeiro
 * Description: The n first odd numbers
 * Date: 2023-02-25 - Hour: 18:42
 */

#include <stdio.h>

int main() {

    int n, i;

    printf("Enter a natural number: ");
    scanf("%d", &n);

    i = 1;

    printf("Odd numbers: ");

    while (n > 0) {

        printf("%d; ", i);

        i += 2;
        n -= 1;

    }

    printf("\n");

    return 0;

}

/* Author: Pedro Henrique Resende Ribeiro
 * Description: The first n multiples
 * Date: 2023-03-05 - Hour: 22:10
 */

#include <stdio.h>

int main() {

    int n, i, j, k, counter;

    printf("Enter the number of multiples: ");
    scanf("%d", &n);

    printf("Enter the 1st number: ");
    scanf("%d", &i);

    printf("Enter the 2nd number: ");
    scanf("%d", &j);

    counter = 0;
    k = 0;

    printf("Multiples: ");

    while (counter < n) {

        if (k % i == 0 || k % j == 0) {

            printf("%d; ", k);
            counter++;

        }

        k++;

    }

    printf("\n");

    return 0;

}

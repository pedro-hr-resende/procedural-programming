/* Author: Pedro Henrique Resende Ribeiro
 * Description: Sum of fibonacci sequence
 * Date: 2023-03-13 - Hour: 21:10
 */

#include <stdio.h>

int main() {

    int f1, f2, f3, sum;

    f1 = 0;
    f2 = 1;
    f3 = 1;
    sum = 0;

    while (f3 < 4000000) {

        f3 = f1 + f2;

        if (f3 % 2 == 0) {

            sum += f3;

        }

        f1 = f2;
        f2 = f3;

    }

    printf("The sum is %d\n", sum);

    return 0;

}

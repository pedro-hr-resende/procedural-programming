/* Author: Pedro Henrique Resende Ribeiro
 * Description: Difference between the sums
 * Date: 2023-03-09 - Hour: 21:40
 */

#include <stdio.h>
#include <math.h>

int main() {

    int sum1, sum2, i;

    sum1 = sum2 = 0.0;

    for (i = 1; i <= 100; i++) {

        sum1 += (int) pow(i, 2.0);
        sum2 += i;

    }

    sum2 = (int) pow(sum2, 2.0);

    printf("The difference between the sum is %d\n", sum2 - sum1);

    return 0;

}

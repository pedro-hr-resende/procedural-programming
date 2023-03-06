/* Author: Pedro Henrique Resende Ribeiro
 * Description: Series calculation
 * Date: 2023-03-05 - Hour: 21:20
 */

#include <stdio.h>

int main() {

    int i;
    float sum;

    sum = 0.0;

    for (i = 1; i <= 50; i++) {

        sum += (float)(i * 2 - 1) / (float)i;

    }

    printf("The sum is: %.2f\n", sum);

    return 0;

}

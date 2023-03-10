/* Author: Pedro Henrique Resende Ribeiro
 * Description: Pythagorean theorem
 * Date: 2023-03-09 - Hour: 23:20
 */

#include <stdio.h>

int main() {

    int a, b, c;

    for (a = 1; a <= 1000; a++) {

        for (b = 1; b <= 1000; b++) {

            for (c = 1; c <= 1000; c++) {

                if (a * a + b * b == c * c &&
                    a + b + c == 1000) {

                    printf("a = %d; b = %d; c = %d\n", a, b, c);
                    printf("%d^2 + %d^2 = %d^2\n", a, b, c);
                    printf("\n");

                }

            }

        }

    }

    return 0;

}

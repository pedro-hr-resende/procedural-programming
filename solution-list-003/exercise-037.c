/* Author: Pedro Henrique Resende Ribeiro
 * Description: The square property
 * Date: 2023-03-07 - Hour: 21:40
 */

#include <stdio.h>
#include <math.h>

int main() {

    int number, part1, part2;
    int sum, square, i;

    for (i = 1000; i <= 9999; i++) {

        number = i;

        part1 = number % 10;
        number /= 10;
        part1 += (number % 10) * 10;
        number /= 10;

        part2 = number % 10;
        number /= 10;
        part2 += (number % 10) * 10;

        sum = part1 + part2;
        square = (int)pow(sum, 2.0);

        if (square == i) {

            printf("Number: %d\n", i);
            printf("%02d + %02d = %d and %d^2 = %d\n", part2, part1, sum, sum, square);
            printf("\n");

        }

    }

    return 0;

}

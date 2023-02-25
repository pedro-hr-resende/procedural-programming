/* Author: Pedro Henrique Resende Ribeiro
 * Description: Countdown from 10 to 0
 * Date: 2023-02-24 - Hour: 21:05
 */

#include <stdio.h>

int main() {

    int i;

    i = 10;

    printf("Countdown: ");

    while (i >= 0) {

        printf("%d; ", i);
        i--;

    }

    printf("Finish!\n");

    return 0;

}

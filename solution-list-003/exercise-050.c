/* Author: Pedro Henrique Resende Ribeiro
 * Description: Height difference
 * Date: 2023-03-13 - Hour: 21:25
 */

#include <stdio.h>

int main() {

    float height1, height2;
    float cm1, cm2;
    int years;

    height1 = 1.50;
    height2 = 1.10;

    cm1 = 0.02;
    cm2 = 0.05;

    years = 0;

    while (height2 < height1) {

        years++;

        height1 = height1 + cm1;
        height2 = height2 + cm2;

    }

    printf("Height 1: %.2f\n", height1);
    printf("Height 2: %.2f\n", height2);
    printf("Years: %d\n", years);

    return 0;

}

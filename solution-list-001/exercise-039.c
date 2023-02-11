/* Author: Pedro Henrique Resende Ribeiro
 * Description: Prize division
 * Date: 2023-02-11 - Hour: 19:30
 */

#include <stdio.h>

int main() {

    float prize, winner1, winner2, winner3;

    prize = 780000.00;

    winner1 = prize * 0.46;
    winner2 = prize * 0.32;
    winner3 = prize - winner1 - winner2;

    printf("Total prize: %.2f\n", prize);
    printf("Winner 1: %.2f\n", winner1);
    printf("Winner 2: %.2f\n", winner2);
    printf("Winner 3: %.2f\n", winner3);

    return 0;

}

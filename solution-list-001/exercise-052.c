/* Author: Pedro Henrique Resende Ribeiro
 * Description: Prize division for three friends
 * Date: 2023-02-13 - Hour: 21:40
 */

#include <stdio.h>

int main() {

    float friend1, friend2, friend3, prize;
    float totalInvested;

    printf("Enter the amount invested by friend 1: ");
    scanf("%f", &friend1);

    printf("Enter the amount invested by friend 2: ");
    scanf("%f", &friend2);

    printf("Enter the amount invested by friend 3: ");
    scanf("%f", &friend3);

    printf("Enter the prize: ");
    scanf("%f", &prize);

    totalInvested = friend1 + friend2 + friend3;

    printf("The value for friend 1 is: %.2f\n", prize * friend1 / totalInvested);
    printf("The value for friend 2 is: %.2f\n", prize * friend2 / totalInvested);
    printf("The value for friend 3 is: %.2f\n", prize * friend3 / totalInvested);

    return 0;

}

/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from liters to m3
 * Date: 2023-02-09 - Hour: 20:32
 */

#include <stdio.h>

int main() {

    float m3, liters;

    printf("Enter a volume in liters: ");
    scanf("%f", &liters);

    m3 = liters / 1000.0;

    printf("The volume in m3 is: %.2f\n", m3);

    return 0;

}

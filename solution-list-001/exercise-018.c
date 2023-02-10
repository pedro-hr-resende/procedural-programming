/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from m3 to liters
 * Date: 2023-02-09 - Hour: 20:28
 */

#include <stdio.h>

int main() {

    float m3, liters;

    printf("Enter a volume in m3: ");
    scanf("%f", &m3);

    liters = m3 * 1000.0;

    printf("The volume in liters is: %.2f\n", liters);

    return 0;

}

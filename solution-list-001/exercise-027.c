/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from hectare to m2
 * Date: 2023-02-10 - Hour: 20:00
 */

#include <stdio.h>

int main() {

    float m2, hectare;

    printf("Enter an area in hectare: ");
    scanf("%f", &hectare);

    m2 = hectare * 10000;

    printf("The area in m2 is: %.2f\n", m2);

    return 0;

}

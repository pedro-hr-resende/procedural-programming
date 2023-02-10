/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from m2 to hectare
 * Date: 2023-02-10 - Hour: 20:00
 */

#include <stdio.h>

int main() {

    float m2, hectare;

    printf("Enter an area in m2: ");
    scanf("%f", &m2);

    hectare = m2 * 0.0001;

    printf("The area in hectare is: %.2f\n", hectare);

    return 0;

}

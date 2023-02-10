/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from acres to m2
 * Date: 2023-02-09 - Hour: 20:40
 */

#include <stdio.h>

int main() {

    float m2, acres;

    printf("Enter an area in acres: ");
    scanf("%f", &acres);

    m2 = acres * 4048.58;

    printf("The area in m2 is: %.2f\n", m2);

    return 0;

}

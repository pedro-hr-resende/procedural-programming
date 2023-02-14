/* Author: Pedro Henrique Resende Ribeiro
 * Description: Calculate the price of fence fabric
 * Date: 2023-02-13 - Hour: 21:45
 */

#include <stdio.h>

int main() {

    float length, width, perimeter, fencePrice;

    printf("Enter the width of the area: ");
    scanf("%f", &width);

    printf("Enter the length of the area: ");
    scanf("%f", &length);

    printf("Enter the price per meter of the fence fabric: ");
    scanf("%f", &fencePrice);

    perimeter = 2 * length + 2 * width;

    printf("The total value is: %.2f\n", perimeter * fencePrice);

    return 0;

}

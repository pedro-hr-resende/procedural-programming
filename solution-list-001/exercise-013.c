/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from km to miles
 * Date: 2023-02-09 - Hour: 20:08
 */

#include <stdio.h>

int main() {

    float km, miles;

    printf("Enter a distance in km: ");
    scanf("%f", &km);

    miles = km / 1.61;

    printf("The distance in miles is: %.2f\n", miles);

    return 0;

}

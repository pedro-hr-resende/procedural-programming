/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from miles to km
 * Date: 2023-02-09 - Hour: 20:04
 */

#include <stdio.h>

int main() {

    float km, miles;

    printf("Enter a distance in miles: ");
    scanf("%f", &miles);

    km = miles * 1.61;

    printf("The distance in km is: %.2f\n", km);

    return 0;

}

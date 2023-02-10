/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from kg to pounds
 * Date: 2023-02-09 - Hour: 20:34
 */

#include <stdio.h>

int main() {

    float kg, pounds;

    printf("Enter a mass in kg: ");
    scanf("%f", &kg);

    pounds = kg / 0.45;

    printf("The mass in pounds is: %.2f\n", pounds);

    return 0;

}

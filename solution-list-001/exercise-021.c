/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from pounds to kg
 * Date: 2023-02-09 - Hour: 20:34
 */

#include <stdio.h>

int main() {

    float kg, pounds;

    printf("Enter a mass in pounds: ");
    scanf("%f", &pounds);

    kg = pounds * 0.45;

    printf("The mass in kg is: %.2f\n", kg);

    return 0;

}

/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from real to dollar
 * Date: 2023-02-10 - Hour: 20:15
 */

#include <stdio.h>

int main() {

    float real, dollar, rate;

    printf("Enter the value in real: ");
    scanf("%f", &real);

    printf("Enter the exchange rate: ");
    scanf("%f", &rate);

    dollar = real * rate;

    printf("The value in dollar is: %.2f\n", dollar);

    return 0;

}

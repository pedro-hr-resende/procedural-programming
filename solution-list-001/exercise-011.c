/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from m/s to km/h
 * Date: 2023-02-09 - Hour: 20:00
 */

#include <stdio.h>

int main() {

    float kmh, ms;

    printf("Enter a speed in m/s: ");
    scanf("%f", &ms);

    kmh = ms * 3.6;

    printf("The speed in km/h is: %.2f\n", kmh);

    return 0;

}

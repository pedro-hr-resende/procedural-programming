/* Author: Pedro Henrique Resende Ribeiro
 * Description: Ideal weight
 * Date: 2023-02-14 - Hour: 20:55
 */

#include <stdio.h>

int main() {

    float height, weight;
    char gender;

    printf("Enter the height in meters: ");
    scanf("%f", &height);


    printf("Enter the gender (M/F): ");
    fflush(stdin);
    scanf("%c", &gender);

    if (gender == 'M') {

        weight = (72.7 * height) - 58.0;
        printf("The ideal weight is: %.2f kg\n", weight);

    } else if (gender == 'F') {

        weight = (62.1 * height) - 44.7;
        printf("The ideal weight is: %.2f kg\n", weight);

    } else {

        printf("Invalid gender\n");

    }

    return 0;

}

/* Author: Pedro Henrique Resende Ribeiro
 * Description: Triangle area
 * Date: 2023-03-09 - Hour: 23:25
 */

#include <stdio.h>

int main() {

    float base, height, area;
    char option;

    do {

        printf("Enter the base: ");
        scanf("%f", &base);

        printf("Enter the height: ");
        scanf("%f", &height);

        if (base <= 0.0 || height <= 0.0) {

            printf("Invalid measures\n");
            break;

        }

        area = (base * height) / 2.0;

        printf("The area is %.2f\n", area);

        printf("\nDo you want to calculate a new area? (s/n): ");
        fflush(stdin);
        scanf("%c", &option);

        printf("\n");


    } while(option != 'n');

    return 0;

}

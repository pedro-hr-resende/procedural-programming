/* Author: Pedro Henrique Resende Ribeiro
 * Description: Area of a trapezoid
 * Date: 2023-02-16 - Hour: 21:32
 */

#include <stdio.h>

int main() {

    float minorBase, biggerBase, height, area;

    printf("Enter the minor base: ");
    scanf("%f", &minorBase);

    if (minorBase <= 0) {

        printf("Invalid number");
        return -1;

    }

    printf("Enter the bigger base: ");
    scanf("%f", &biggerBase);

    if (biggerBase <= 0) {

        printf("Invalid number");
        return -1;

    }

    printf("Enter the height: ");
    scanf("%f", &height);

    if (height <= 0) {

        printf("Invalid number");
        return -1;

    }

    area = ((minorBase + biggerBase) * height) / 2.0;

    printf("The area is: %.2f\n", area);

    return 0;

}

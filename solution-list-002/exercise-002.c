/* Author: Pedro Henrique Resende Ribeiro
 * Description: Calculate the square root of a number
 * Date: 2023-02-14 - Hour: 20:20
 */

#include <stdio.h>
#include <math.h>

int main() {

    float number, root;

    printf("Enter the number: ");
    scanf("%f", &number);

    if (number > 0) {

        root = sqrt(number);
        printf("The square root is: %.2f\n", root);

    } else {

        printf("The number is invalid\n");

    }

    return 0;

}

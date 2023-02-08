/* Author: Pedro Henrique Resende Ribeiro
 * Description: Read and print a real number
 * Date: 2023-02-07 - Hour: 22:00
 */

#include <stdio.h>

int main() {

    float number;

    printf("Enter a real number: ");
    scanf("%f", &number);

    printf("The number is: %.2f\n", number);

    return 0;

}

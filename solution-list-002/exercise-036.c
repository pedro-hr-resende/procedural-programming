/* Author: Pedro Henrique Resende Ribeiro
 * Description: Commission calculation
 * Date: 2023-02-22 - Hour: 23:00
 */

 #include <stdio.h>

 int main() {

    float value;

    printf("Enter the sale amount: ");
    scanf("%f", &value);

    if (value > 0.0 && value < 20000.0) {

        printf("Comission: %.2f\n", 400.00 + 0.14 * value);

    } else if (value >= 20000.0 && value < 40000.0) {

        printf("Comission: %.2f\n", 500.00 + 0.14 * value);

    } else if (value >= 40000.0 && value < 60000.0) {

        printf("Comission: %.2f\n", 550.00 + 0.14 * value);

    } else if (value >= 60000.0 && value < 80000.0) {

        printf("Comission: %.2f\n", 600.00 + 0.14 * value);

    } else if (value >= 80000.0 && value < 100000.0) {

        printf("Comission: %.2f\n", 650.00 + 0.14 * value);

    } else if (value >= 100000.0) {

        printf("Comission: %.2f\n", 700.00 + 0.16 * value);

    } else {

        printf("Invalid value\n");

    }

    return 0;

 }

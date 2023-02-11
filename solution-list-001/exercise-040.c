/* Author: Pedro Henrique Resende Ribeiro
 * Description: Plumber's payment
 * Date: 2023-02-11 - Hour: 19:35
 */

#include <stdio.h>

int main() {

    float salary, valueHour;
    int days;

    printf("Enter the number of days worked: ");
    scanf("%d", &days);

    valueHour = 30.00;

    salary = valueHour * days * (1.00 - 0.08);

    printf("The plumber's salary is: %.2f\n", salary);

    return 0;

}

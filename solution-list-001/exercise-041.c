/* Author: Pedro Henrique Resende Ribeiro
 * Description: Calculate salary
 * Date: 2023-02-12 - Hour: 10:20
 */

#include <stdio.h>

int main() {

    float valueHour, workedHour, salary;

    printf("Enter the value per hour: ");
    scanf("%f", &valueHour);

    printf("Enter the number of hours worked: ");
    scanf("%f", &workedHour);

    salary = valueHour * workedHour * 1.10;

    printf("The salary is: %.2f\n", salary);

    return 0;

}

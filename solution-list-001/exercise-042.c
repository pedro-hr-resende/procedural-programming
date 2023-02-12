/* Author: Pedro Henrique Resende Ribeiro
 * Description: Calculate salary
 * Date: 2023-02-12 - Hour: 16:30
 */

#include <stdio.h>

int main() {

    float baseSalary, salary;

    printf("Enter the base salary: ");
    scanf("%f", &baseSalary);

    salary = baseSalary * (1.00 + 0.05 - 0.07);

    printf("The salary is: %.2f\n", salary);

    return 0;

}

/* Author: Pedro Henrique Resende Ribeiro
 * Description: Salary increase
 * Date: 2023-02-11 - Hour: 19:25
 */

#include <stdio.h>

int main() {

    float salary, newSalary;

    printf("Enter the employee's salary: ");
    scanf("%f", &salary);

    newSalary = salary * (1.00 + 0.25);

    printf("The new salary is: %.2f\n", newSalary);

    return 0;

}

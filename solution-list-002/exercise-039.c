/* Author: Pedro Henrique Resende Ribeiro
 * Description: Salary adjustment
 * Date: 2023-02-23 - Hour: 21:40
 */

 #include <stdio.h>

 int main() {

    float salary, newSalary;
    int serviceTime;

    printf("Enter the salary: ");
    scanf("%f", &salary);

    printf("Enter the service time: ");
    scanf("%d", &serviceTime);

    if (salary <= 500.0 && serviceTime < 1) {

        newSalary = salary * 1.25;

    } else if ((salary > 500.0 && salary <= 1000.0) &&
               (serviceTime >= 1 && serviceTime <= 3)) {

        newSalary = salary * 1.20 + 100.0;

    } else if ((salary > 1000.0 && salary <= 1500.0) &&
               (serviceTime >= 4 && serviceTime <= 6)) {

        newSalary = salary * 1.15 + 200.0;

    } else if ((salary > 1500.0 && salary <= 2000.0) &&
               (serviceTime >= 7 && serviceTime <= 10)) {

        newSalary = salary * 1.10 + 300.0;

    } else if (salary > 2000.0 && serviceTime > 10) {

        newSalary = salary + 500.0;

    }

    printf("New salary: %.2f\n", newSalary);

    return 0;

 }

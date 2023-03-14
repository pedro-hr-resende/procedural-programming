/* Author: Pedro Henrique Resende Ribeiro
 * Description: Salary application
 * Date: 2023-03-13 - Hour: 21:10
 */

#include <stdio.h>

int main() {

    float salary1, salary2;
    float fee1, fee2;
    int months;

    salary1 = 3000.0;
    salary2 = salary1 / 3.0;

    fee1 = 0.02;
    fee2 = 0.05;

    months = 0;

    while (salary2 < salary1) {

        months++;

        salary1 = salary1 * (1.0 + fee1);
        salary2 = salary2 * (1.0 + fee2);

    }

    printf("Salary 1: %.2f\n", salary1);
    printf("Salary 2: %.2f\n", salary2);
    printf("Months: %d\n", months);

    return 0;

}

/* Author: Pedro Henrique Resende Ribeiro
 * Description: Loan for an employee
 * Date: 2023-02-14 - Hour: 20:48
 */

#include <stdio.h>

int main() {

    float salary, installment;

    printf("Enter the employee's salary: ");
    scanf("%f", &salary);

    printf("Enter the loan installment: ");
    scanf("%f", &installment);

    if (installment > salary * 0.2) {

        printf("Loan not granted\n");

    } else {

        printf("Loan granted\n");

    }

    return 0;

}

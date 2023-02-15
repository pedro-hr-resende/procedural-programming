/* Author: Pedro Henrique Resende Ribeiro
 * Description: Average of two grades
 * Date: 2023-02-14 - Hour: 20:44
 */

#include <stdio.h>

int main() {

    float grade1, grade2, average;

    printf("Enter the 1st grade: ");
    scanf("%f", &grade1);

    if (grade1 < 0.0 || grade1 > 10.0) {

        printf("The grade is invalid\n");
        return -1;

    }

    printf("Enter the 2nd grade: ");
    scanf("%f", &grade2);

    if (grade2 < 0.0 || grade2 > 10.0) {

        printf("The grade is invalid\n");
        return -1;

    }

    average = (grade1 + grade2) / 2.0;

    printf("The average grade is %.2f\n", average);

    return 0;

}

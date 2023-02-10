/* Author: Pedro Henrique Resende Ribeiro
 * Description: Grade avarage
 * Date: 2023-02-10 - Hour: 20:14
 */

#include <stdio.h>
#include <math.h>

int main() {

    float grade1, grade2, grade3, grade4, average;

    printf("Enter the 1st grade: ");
    scanf("%f", &grade1);

    printf("Enter the 2nd grade: ");
    scanf("%f", &grade2);

    printf("Enter the 3rd grade: ");
    scanf("%f", &grade3);

    printf("Enter the 4th grade: ");
    scanf("%f", &grade4);

    average = (grade1 + grade2 + grade3 + grade4) / 4.0;

    printf("The average grade is: %.2f\n", average);

    return 0;

}

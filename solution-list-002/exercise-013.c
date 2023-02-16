/* Author: Pedro Henrique Resende Ribeiro
 * Description: Average of three grades
 * Date: 2023-02-15 - Hour: 21:25
 */

#include <stdio.h>

int main() {

    float grade1, grade2, grade3, average;

    printf("Enter the 1st grade: ");
    scanf("%f", &grade1);

    printf("Enter the 2nd grade: ");
    scanf("%f", &grade2);

    printf("Enter the 3rd grade: ");
    scanf("%f", &grade3);

    average = (grade1 + grade2 + 2 * grade3) / 4.0;

    if (average >= 60) {

        printf("Approved with a final grade equal to %.2f\n", average);

    } else {

        printf("Failed with a final grade equal to %.2f\n", average);

    }

    return 0;

}

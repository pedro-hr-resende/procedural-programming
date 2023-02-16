/* Author: Pedro Henrique Resende Ribeiro
 * Description: Average of three grades
 * Date: 2023-02-15 - Hour: 21:35
 */

#include <stdio.h>

int main() {

    float grade1, grade2, grade3, average;

    printf("Enter the 1st grade: ");
    scanf("%f", &grade1);

    if (grade1 < 0 || grade1 > 10) {

        printf("Invalid grade\n");

    }

    printf("Enter the 2nd grade: ");
    scanf("%f", &grade2);

    if (grade2 < 0 || grade2 > 10) {

        printf("Invalid grade\n");

    }

    printf("Enter the 3rd grade: ");
    scanf("%f", &grade3);

    if (grade3 < 0 || grade3 > 10) {

        printf("Invalid grade\n");

    }

    average = (grade1 * 2.0 + grade2 * 3.0 + grade3 * 5.0) / 10.0;

    if (average < 3) {

        printf("Failed - Final grade: %.1f\n", average);

    } else if (average < 5) {

        printf("Recuperation - Final grade: %.1f\n", average);

    } else {

        printf("Approved - Final grade: %.1f\n", average);

    }

    return 0;

}

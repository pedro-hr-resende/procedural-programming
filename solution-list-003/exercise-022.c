/* Author: Pedro Henrique Resende Ribeiro
 * Description: Grade average
 * Date: 2023-03-02 - Hour: 22:40
 */

#include <stdio.h>

int main() {

    float grade, average;
    int i, counter;

    average = 0;
    counter = 0;

    printf("Enter a grade: ");
    scanf("%f", &grade);

    while (grade >= 10.0 && grade <= 20.0) {

        average += grade;
        counter++;

        printf("Enter a grade: ");
        scanf("%f", &grade);

    }

    average /= counter;

    printf("The average is: %.2f\n", average);

    return 0;

}

/* Author: Pedro Henrique Resende Ribeiro
 * Description: Grades of a student
 * Date: 2023-02-22 - Hour: 22:00
 */

 #include <stdio.h>

 int main() {

    float grade;
    int absences;
    char letter;

    printf("Enter the grade: ");
    scanf("%f", &grade);

    printf("Enter the number of absences: ");
    scanf("%d", &absences);

    if (grade >= 0.0 && grade <= 3.9) {

        letter = 'E';

    } else if (grade >= 4.0 && grade <= 4.9) {

        letter = 'D';

    } else if (grade >= 5.0 && grade <= 7.4) {

        letter = 'C';

    } else if (grade >= 7.5 && grade <= 8.9) {

        letter = 'B';

    } else if (grade >= 9.0 && grade <= 10.0) {

        letter = 'A';

    }

    if (absences > 20 && letter != 'E') {

        letter += 1;

    }

    printf("The grade is: %c\n", letter);

    return 0;

 }

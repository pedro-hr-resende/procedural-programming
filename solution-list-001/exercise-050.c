/* Author: Pedro Henrique Resende Ribeiro
 * Description: Year of birth of a person
 * Date: 2023-02-13 - Hour: 21:30
 */

#include <stdio.h>

int main() {

    int age, currentYear, birthYear;

    printf("Enter the age: ");
    scanf("%d", &age);

    printf("Enter the current year: ");
    scanf("%d", &currentYear);

    birthYear = currentYear - age;

    printf("The year of birth is: %d\n", birthYear);

    return 0;

}

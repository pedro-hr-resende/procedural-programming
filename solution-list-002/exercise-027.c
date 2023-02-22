/* Author: Pedro Henrique Resende Ribeiro
 * Description: Swimming categories
 * Date: 2023-02-21 - Hour: 20:15
 */

 #include <stdio.h>

 int main() {

    int age;

    printf("Enter the age: ");
    scanf("%d", &age);

    if (age < 5) {

        printf("Too young \n");

    } else if (age >= 5 && age <= 7) {

        printf("Infantile A\n");

    } else if (age >= 8 && age <= 10) {

        printf("Infantile B\n");

    } else if (age >= 11 && age <= 13) {

        printf("Juvenile A\n");

    } else if (age >= 14 && age <= 17) {

        printf("Juvenile B\n");

    } else if (age >= 18) {

        printf("Senior\n");

    }

    return 0;

 }

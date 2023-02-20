/* Author: Pedro Henrique Resende Ribeiro
 * Description: Conditions to be retired
 * Date: 2023-02-20 - Hour: 12:25
 */

 #include <stdio.h>

 int main() {

    int age, contribution;

    printf("Enter the employee's age: ");
    scanf("%d", &age);

    printf("Enter the contribution time: ");
    scanf("%d", &contribution);

    if (age >= 65) {

        printf("The employee can retire\n");

    } else if (contribution >= 30) {

        printf("The employee can retire\n");

    } else if (age >= 60 && contribution >= 25) {

        printf("The employee can retire\n");

    } else {

        printf("The employee cannot retire\n");

    }

    return 0;

 }

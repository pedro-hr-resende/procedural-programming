/* Author: Pedro Henrique Resende Ribeiro
 * Description: Average age calculation
 * Date: 2023-03-12 - Hour: 23:20
 */

#include <stdio.h>

int main() {

    int age, counter;
    float average;

    printf("Enter an age: ");
    scanf("%d", &age);

    counter = 0;
    average = 0;

    while (age > 0) {

        counter++;
        average += age;

        printf("Enter an age: ");
        scanf("%d", &age);

    }

    average /= (float)counter;

    printf("The average age is %.2f\n", average);

    return 0;

}

/* Author: Pedro Henrique Resende Ribeiro
 * Description: Leap year
 * Date: 2023-02-20 - Hour: 12:55
 */

 #include <stdio.h>

 int main() {

    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {

        printf("It is a leap year\n");

    } else if (year % 4 == 0 && year % 100 != 0) {

        printf("It is a leap year\n");

    } else {

        printf("It isn't a leap year\n");

    }

    return 0;

 }

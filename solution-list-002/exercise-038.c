/* Author: Pedro Henrique Resende Ribeiro
 * Description: Valid date
 * Date: 2023-02-23 - Hour: 21:20
 */

 #include <stdio.h>

 #define CURRENT_YEAR 2023

 int main() {

    int day, month, year;
    int isLeap;

    printf("Enter the day: ");
    scanf("%d", &day);

    printf("Enter the month: ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);

    if (year > CURRENT_YEAR) {

        printf("Invalid date\n");
        return -1;

    }

    if (month < 1 || month > 13) {

        printf("Invalid date\n");
        return -1;

    }

    if ((year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0)) {

        isLeap = 1;

    } else {

        isLeap = 0;

    }

    if (month == 1 || month == 3 || month == 5 ||
        month == 7 || month == 8 || month == 10 ||
        month == 12) {

        if (day >= 1 && day <= 31) {

            printf("It is valid date\n");

        } else {

            printf("Invalid date\n");
            return -1;

        }

    } else if (month == 4 || month == 6 ||
               month == 9 || month == 11) {

        if (day >= 1 && day <= 30) {

            printf("It is valid date\n");

        } else {

            printf("Invalid date\n");
            return -1;

        }

    } else if (month == 2 && isLeap == 1) {

        if (day >= 1 && day <= 29) {

            printf("It is valid date\n");

        } else {

            printf("Invalid date\n");
            return -1;

        }

    } else if (month == 2 && isLeap == 0) {

        if (day >= 1 && day <= 28) {

            printf("It is valid date\n");

        } else {

            printf("Invalid date\n");
            return -1;

        }

    }

    return 0;

 }

/* Author: Pedro Henrique Resende Ribeiro
 * Description: Days of the week
 * Date: 2023-02-15 - Hour: 22:00
 */

#include <stdio.h>

int main() {

    int day;

    printf("Enter a number between 1 and 7: ");
    scanf("%d", &day);

    switch (day) {

        case 1:

            printf("Sunday\n");
            break;

        case 2:

            printf("Monday\n");
            break;

        case 3:

            printf("Tuesday\n");
            break;

        case 4:

            printf("Wednesday\n");
            break;

        case 5:

            printf("Thursday\n");
            break;

        case 6:

            printf("Friday\n");
            break;

        case 7:

            printf("Sunday\n");
            break;

        default:

            printf("Invalid number\n");
            break;

    }

    return 0;

}

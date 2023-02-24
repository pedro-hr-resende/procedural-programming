/* Author: Pedro Henrique Resende Ribeiro
 * Description: Parking fee
 * Date: 2023-02-23 - Hour: 20:15
 */

 #include <stdio.h>

 int main() {

    int numberHours, numberMinutes;
    int arrivalHour, arrivalMinute;
    int exitHour, exitMinute;

    printf("Enter the arrival hour: ");
    scanf("%d", &arrivalHour);

    printf("Enter the arrival minute: ");
    scanf("%d", &arrivalMinute);

    printf("Enter the exit hour: ");
    scanf("%d", &exitHour);

    printf("Enter the exit minute: ");
    scanf("%d", &exitMinute);

    if (exitHour < arrivalHour &&
        arrivalMinute <= exitMinute) {

        numberHours = 24 - arrivalHour + exitHour;
        numberMinutes = exitMinute - arrivalMinute;

    } else if (exitHour < arrivalHour &&
               arrivalMinute > exitMinute) {

        numberHours = 24 - arrivalHour + exitHour - 1;
        numberMinutes = 60 - arrivalMinute + exitMinute;

    } else if (exitHour >= arrivalHour &&
               arrivalMinute <= exitMinute) {

        numberHours = exitHour - arrivalHour;
        numberMinutes = exitMinute - arrivalMinute;

    } else if (exitHour >= arrivalHour &&
               arrivalMinute <= exitMinute) {

        numberHours = exitHour - arrivalHour - 1;
        numberMinutes = 60 - arrivalMinute + exitMinute;

    }

    if (numberMinutes != 0) {

        numberHours += 1;

    }

    if (numberHours <= 2) {

        printf("Total: %.2f\n", numberHours * 1.00);

    } else if (numberHours > 2 && numberHours <= 4) {

        printf("Total: %.2f\n", (numberHours - 2) * 1.40 + 2.00);

    } else if (numberHours >= 5) {

        printf("Total: %.2f\n", (numberHours - 4) * 2.00 + 4.80);

    } else {

        printf("Error\n");

    }

    return 0;

 }

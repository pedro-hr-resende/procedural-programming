/* Author: Pedro Henrique Resende Ribeiro
 * Description: Print the new time of an experiment
 * Date: 2023-02-13 - Hour: 21:20
 */

#include <stdio.h>

int main() {

    int hours, minutes, seconds;
    int duration, total;

    printf("Enter the hours: ");
    scanf("%d", &hours);

    printf("Enter the minutes: ");
    scanf("%d", &minutes);

    printf("Enter the seconds: ");
    scanf("%d", &seconds);

    printf("Enter the duration of the experiment in seconds: ");
    scanf("%d", &duration);

    total = hours * 3600 + minutes * 60 + seconds + duration;

    hours = (int)(total / 3600);
    total = total - hours * 3600;

    minutes = (int)(total / 60);
    total = total - minutes * 60;

    seconds = total;

    printf("The end time of the experiment is: %d:%d:%d\n", hours, minutes, seconds);

    return 0;

}

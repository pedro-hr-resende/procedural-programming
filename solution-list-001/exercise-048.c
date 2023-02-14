/* Author: Pedro Henrique Resende Ribeiro
 * Description: Print a time in hh:mm:ss
 * Date: 2023-02-13 - Hour: 21:10
 */

#include <stdio.h>

int main() {

    int hours, minutes, seconds;

    printf("Enter a value in seconds: ");
    scanf("%d", &seconds);

    hours = (int)(seconds / 3600);
    seconds = seconds - hours * 3600;

    minutes = (int)(seconds / 60);

    seconds = seconds - minutes * 60;

    printf("The hour is: %d:%d:%d\n", hours, minutes, seconds);

    return 0;

}

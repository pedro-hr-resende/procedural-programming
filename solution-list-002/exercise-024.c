/* Author: Pedro Henrique Resende Ribeiro
 * Description: Tax by state
 * Date: 2023-02-20 - Hour: 13:10
 */

 #include <stdio.h>
 #include <string.h>

 int main() {

    float value;
    char state[3];

    printf("Enter the product value: ");
    scanf("%f", &value);

    printf("Enter the state (MG - SP - RJ - MS): ");
    fflush(stdin);
    scanf("%s", &state);

    if (strcmp(state, "MG") == 0) {

        printf("The final value is: %.2f\n", value * 1.07);

    } else if (strcmp(state, "SP") == 0 ) {

        printf("The final value is: %.2f\n", value * 1.12);

    } else if (strcmp(state, "RJ") == 0) {

        printf("The final value is: %.2f\n", value * 1.15);

    } else if (strcmp(state, "MS") == 0) {

        printf("The final value is: %.2f\n", value * 1.08);

    } else {

        printf("Invalid state\n");

    }

    return 0;

 }

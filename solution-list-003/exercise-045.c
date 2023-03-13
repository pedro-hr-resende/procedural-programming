/* Author: Pedro Henrique Resende Ribeiro
 * Description: Speed conversion
 * Date: 2023-03-12 - Hour: 23:45
 */

#include <stdio.h>

int main() {

    float speed;
    int option;

    printf(" ---------------------- \n");
    printf("|       Options        |\n");
    printf("|----------------------|\n");
    printf("| 1 - From km/h to m/s |\n");
    printf("| 2 - From m/s to km/h |\n");
    printf("| 3 - Exit             |\n");
    printf(" ---------------------- \n");

    do {

        printf("\n");

        printf("Option: ");
        scanf("%d", &option);

        switch (option) {

            case 1:

                printf("Enter a speed in km/h: ");
                scanf("%f", &speed);

                printf("The speed in m/s is %.2f\n", speed / 3.6);

                break;

            case 2:

                printf("Enter a speed in m/s: ");
                scanf("%f", &speed);

                printf("The speed in km/h is %.2f\n", speed * 3.6);

                break;

            case 3:

                printf("End of program\n");

                break;

            default:

                printf("Invalid option\n");

        }

    } while (option != 3);

    return 0;

}

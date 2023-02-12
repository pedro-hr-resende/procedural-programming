/* Author: Pedro Henrique Resende Ribeiro
 * Description: Calculate the number of steps
 * Date: 2023-02-12 - Hour: 16:45
 */

#include <stdio.h>

int main() {

    float stepHeight, height;
    int numberSteps;

    printf("Enter the height of the step: ");
    scanf("%f", &stepHeight);

    printf("Enter the height you want to reach: ");
    scanf("%f", &height);

    numberSteps = (int) (height / stepHeight);

    if (height - numberSteps * stepHeight > 0) {
        numberSteps += 1;
    }

    printf("The number of steps is: %d\n", numberSteps);

    return 0;

}

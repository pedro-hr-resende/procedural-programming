/* Author: Pedro Henrique Resende Ribeiro
 * Description: Person classification
 * Date: 2023-02-21 - Hour: 21:30
 */

 #include <stdio.h>

 int main() {

    float height, weight;

    printf("Enter the height: ");
    scanf("%f", &height);

    printf("Enter the weight: ");
    scanf("%f", &weight);

    if (height < 1.20) {

        if (weight < 60) {

            printf("Class A\n");

        } else if (weight >= 60 && weight <= 90) {

            printf("Class B\n");

        } else {

            printf("Class C\n");

        }

    } else if (height >= 1.20 && height <= 1.70) {

        if (weight < 60) {

            printf("Class D\n");

        } else if (weight >= 60 && weight <= 90) {

            printf("Class E\n");

        } else {

            printf("Class F\n");

        }

    } else {

        if (weight < 60) {

            printf("Class G\n");

        } else if (weight >= 60 && weight <= 90) {

            printf("Class H\n");

        } else {

            printf("Class I\n");

        }

    }

    return 0;

 }

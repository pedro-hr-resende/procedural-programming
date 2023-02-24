/* Author: Pedro Henrique Resende Ribeiro
 * Description: Body mass index (BMI)
 * Date: 2023-02-23 - Hour: 22:20
 */

 #include <stdio.h>
 #include <math.h>

 int main() {

    float height, weight, bmi;

    printf("Enter the height in meters: ");
    scanf("%f", &height);

    if (height <= 0) {

        printf("Invalid height\n");
        return -1;

    }

    printf("Enter the weight in kg: ");
    scanf("%f", &weight);

    if (weight <= 0) {

        printf("Invalid weight\n");
        return -1;

    }

    bmi = weight / pow(height, 2.0);

    if (bmi <= 18.5) {

        printf("Under weight\n");

    } else if (bmi > 18.5 && bmi <= 24.9) {

        printf("Healthy\n");

    } else if (bmi > 24.9 && bmi <= 29.9) {

        printf("Overweight\n");

    } else if (bmi > 29.9 && bmi <= 34.9) {

        printf("Obesity level 1\n");

    } else if (bmi > 34.9 && bmi <= 39.9) {

        printf("Obesity level 2\n");

    } else if (bmi > 39.9) {

        printf("Obesity level 3\n");

    }

    return 0;

 }

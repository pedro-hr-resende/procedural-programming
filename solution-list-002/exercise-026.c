/* Author: Pedro Henrique Resende Ribeiro
 * Description: Fuel consumption of a car
 * Date: 2023-02-21 - Hour: 20:00
 */

 #include <stdio.h>

 int main() {

    float km, liters, consumption;

    printf("Enter the distance traveled in km: ");
    scanf("%f", &km);

    printf("Enter the total liters of fuel consumed: ");
    scanf("%f", &liters);

    if (liters <= 0) {

        printf("Invalid informations\n");
        return -1;

    }

    consumption = km / liters;

    if (consumption < 8.0) {

        printf("Sell the car\n");

    } else if (consumption >= 8.0 && consumption <= 14.0) {

        printf("The car is economical\n");

    } else {

        printf("The car is super economical\n");

    }

    return 0;

 }

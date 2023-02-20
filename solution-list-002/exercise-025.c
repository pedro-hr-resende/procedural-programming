/* Author: Pedro Henrique Resende Ribeiro
 * Description: 2nd degree equation
 * Date: 2023-02-20 - Hour: 13:20
 */

 #include <stdio.h>
 #include <math.h>

 int main() {

    float a, b, c;
    float delta, r1, r2;

    printf("Enter the coefficient a: ");
    scanf("%f", &a);

    if (a == 0) {

        printf("It isn't a 2nd degree equation\n");
        return -1;

    }

    printf("Enter the coefficient b: ");
    scanf("%f", &b);

    printf("Enter the coefficient c: ");
    scanf("%f", &c);

    delta = pow(b, 2.0) - 4.0 * a * c;

    if (delta < 0) {

        printf("There are no real roots\n");
        return -1;

    }

    r1 = ((-1.0) * b + sqrt(delta)) / (2.0 * a);

    if (delta == 0) {

        printf("There is only one root\n");
        printf("Root: %.2f\n", r1);

    } else {

        r2 = ((-1.0) * b - sqrt(delta)) / (2.0 * a);

        printf("Root 1: %.2f\n", r1);
        printf("Root 2: %.2f\n", r2);

    }

    return 0;

 }

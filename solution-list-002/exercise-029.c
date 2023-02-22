/* Author: Pedro Henrique Resende Ribeiro
 * Description: Math questions
 * Date: 2023-02-21 - Hour: 20:45
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 int main() {

    int number1, number2, answer;
    int counter;

    srand(time(NULL));

    counter = 0;

    number1 = rand() % 99;
    number2 = rand() % 99;

    printf("How much is %d + %d?\n", number1, number2);
    printf("Answer: ");
    scanf("%d", &answer);

    if (answer == number1 + number2) {

        counter++;
        printf("Congratulations, you got it right\n");

    } else {

        printf("You missed. The correct answer is %d\n", number1 + number2);

    }

    printf("\n");

    number1 = rand() % 99;
    number2 = rand() % 99;

    printf("How much is %d + %d?\n", number1, number2);
    printf("Answer: ");
    scanf("%d", &answer);

    if (answer == number1 + number2) {

        counter++;
        printf("Congratulations, you got it right\n");

    } else {

        printf("You missed. The correct answer is %d\n", number1 + number2);

    }

    printf("\n");

    number1 = rand() % 99;
    number2 = rand() % 99;

    printf("How much is %d + %d?\n", number1, number2);
    printf("Answer: ");
    scanf("%d", &answer);

    if (answer == number1 + number2) {

        counter++;
        printf("Congratulations, you got it right\n");

    } else {

        printf("You missed. The correct answer is %d\n", number1 + number2);

    }

    printf("\n");

    number1 = rand() % 99;
    number2 = rand() % 99;

    printf("How much is %d + %d?\n", number1, number2);
    printf("Answer: ");
    scanf("%d", &answer);

    if (answer == number1 + number2) {

        counter++;
        printf("Congratulations, you got it right\n");

    } else {

        printf("You missed. The correct answer is %d\n", number1 + number2);

    }

    printf("\n");

    number1 = rand() % 99;
    number2 = rand() % 99;

    printf("How much is %d + %d?\n", number1, number2);
    printf("Answer: ");
    scanf("%d", &answer);

    if (answer == number1 + number2) {

        counter++;
        printf("Congratulations, you got it right\n");

    } else {

        printf("You missed. The correct answer is %d\n", number1 + number2);

    }

    printf("\n");

    printf("Number of hits: %d\n", counter);

    return 0;

 }

/* Author: Pedro Henrique Resende Ribeiro
 * Description: Convert from uppercase to lowercase
 * Date: 2023-02-12 - Hour: 16:50
 */

#include <stdio.h>

int main() {

    char uppercase, lowercase;

    printf("Enter an uppercase letter: ");
    scanf("%c", &uppercase);

    lowercase = uppercase + 32;

    printf("The lowercase letter is: %c\n", lowercase);

    return 0;

}

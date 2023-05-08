#include <stdio.h>

int main() {
    int num, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("The digits in %d are: ", num);

    while (num > 0) {
        digit = num % 10;
        printf("%d ", digit);
        num /= 10;
    }

    return 0;
}

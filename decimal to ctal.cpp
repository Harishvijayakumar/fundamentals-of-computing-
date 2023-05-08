#include <stdio.h>

int main() {
    int decimalNum, quotient, remainder, i = 1;
    int octalNum[20];

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    quotient = decimalNum;

    while (quotient != 0) {
        remainder = quotient % 8;
        octalNum[i++] = remainder;
        quotient /= 8;
    }

    printf("The octal equivalent of %d is: ", decimalNum);
    for (int j = i - 1; j > 0; j--) {
        printf("%d", octalNum[j]);
    }

    return 0;
}


#include <stdio.h>

int main() {
    int decimalNum, quotient, remainder, i = 0;
    char hexNum[20];

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    quotient = decimalNum;

    while (quotient != 0) {
        remainder = quotient % 16;
        if (remainder < 10) {
            hexNum[i] = remainder + 48; // Convert to ASCII code for digit 0-9
        } else {
            hexNum[i] = remainder + 55; // Convert to ASCII code for uppercase letter A-F
        }
        i++;
        quotient /= 16;
    }

    printf("The hexadecimal equivalent of %d is: ", decimalNum);
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexNum[j]);
    }

    return 0;
}


#include <stdio.h>
#include <math.h>

int main() {
    int octalNum, decimalNum = 0, i = 0;

    printf("Enter an octal number: ");
    scanf("%d", &octalNum);

    while (octalNum != 0) {
        decimalNum += (octalNum % 10) * pow(8, i);
        ++i;
        octalNum /= 10;
    }

    printf("The decimal equivalent of %d is %d", octalNum, decimalNum);

    return 0;
}


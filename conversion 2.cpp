#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char hexNum[20];
    int decimalNum = 0, len, power = 0;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hexNum);

    len = strlen(hexNum);

    for (int i = len - 1; i >= 0; i--) {
        if (hexNum[i] >= '0' && hexNum[i] <= '9') {
            decimalNum += (hexNum[i] - '0') * pow(16, power);
        } else if (hexNum[i] >= 'A' && hexNum[i] <= 'F') {
            decimalNum += (hexNum[i] - 'A' + 10) * pow(16, power);
        } else if (hexNum[i] >= 'a' && hexNum[i] <= 'f') {
            decimalNum += (hexNum[i] - 'a' + 10) * pow(16, power);
        }
        power++;
    }

    printf("The decimal equivalent of %s is: %d", hexNum, decimalNum);

    return 0;
}


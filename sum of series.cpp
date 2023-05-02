#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("The sum of the series is: %d\n", sum);
    return 0;
}

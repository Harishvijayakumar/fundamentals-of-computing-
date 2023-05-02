#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int cube = i * i * i;
        sum += cube;
    }
    printf("The sum of the cubes of the first %d numbers is: %d\n", n, sum);
    return 0;
}

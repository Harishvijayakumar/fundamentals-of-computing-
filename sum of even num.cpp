include <stdio.h>

int main() {
    int limit, sum = 0;
    printf("Enter the limit up to which even numbers should be summed: ");
    scanf("%d", &limit);
    for (int i = 2; i <= limit; i += 2) {
        sum += i;
    }
    printf("The sum of even numbers up to %d is: %d\n", limit, sum);
    return 0;
}

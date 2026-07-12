#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += i * i * i;
    }

    printf("Sum of cubes of first %d numbers = %d", n, sum);
    return 0;
}

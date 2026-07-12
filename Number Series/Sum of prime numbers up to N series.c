#include <stdio.h>

int main() {
    int n, i, j, isPrime, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        isPrime = 1;
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}

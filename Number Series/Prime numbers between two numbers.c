#include <stdio.h>

int main() {
    int a, b, i, j, isPrime;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for(i = a; i <= b; i++) {
        if(i < 2) continue;

        isPrime = 1;
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            printf("%d ", i);
    }
    return 0;
}

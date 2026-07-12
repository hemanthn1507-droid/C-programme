#include <stdio.h>

int isPrime(int num) {
    int i;
    if(num < 2) return 0;
    for(i = 2; i <= num/2; i++) {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n, i;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 2; i <= n-2; i++) {
        if(isPrime(i) && isPrime(i+2)) {
            printf("(%d, %d)\n", i, i+2);
        }
    }
    return 0;
}

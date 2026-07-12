#include <stdio.h>

int main() {
    int n, count = 0, num = 2, i, isPrime;

    printf("Enter N: ");
    scanf("%d", &n);

    while(count < n) {
        isPrime = 1;
        for(i = 2; i <= num/2; i++) {
            if(num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    return 0;
}

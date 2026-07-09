#include <stdio.h>

int main() {
    int i, j, n, fact;

    printf("Enter limit: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = 1;
        for(j = 1; j <= i; j++) {
            fact *= j;
        }
        printf("%d ", fact);
    }

    return 0;
}

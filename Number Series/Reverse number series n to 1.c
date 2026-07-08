#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("Reverse series:\n");

    for(i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    return 0;
}

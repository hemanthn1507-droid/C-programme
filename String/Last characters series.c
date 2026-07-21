#include <stdio.h>
int main() {
    char str[100];
    int i=0;
    scanf("%s", str);
    while(str[i]) i++;
    printf("Last char = %c", str[i-1]);
    return 0;
}

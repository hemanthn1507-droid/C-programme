#include <stdio.h>
int main() {
    char str[100];
    int i=0, count=0;
    scanf("%s", str);
    while(str[i]) {
        if(str[i]>='0' && str[i]<='9')
            count++;
        i++;
    }
    printf("Digits = %d", count);
 return 0;
}

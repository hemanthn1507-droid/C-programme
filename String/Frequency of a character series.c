#include <stdio.h>
int main() {
    char str[100], ch;
    int i=0, count=0;
    gets(str);
    scanf(" %c", &ch);
    while(str[i]) {
        if(str[i]==ch)
            count++;
        i++;
    }
    printf("Frequency = %d", count);
return 0;
}

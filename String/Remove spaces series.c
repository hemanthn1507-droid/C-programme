#include <stdio.h>
int main() {
    char str[100];
    int i=0;
    gets(str);
    while(str[i]) {
        if(str[i] != ' ')
            printf("%c", str[i]);
        i++;
    } 
return 0;
}

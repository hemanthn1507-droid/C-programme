#include <stdio.h>
int main() {
    char str[100], old, new;
    int i=0;
    gets(str);
    scanf(" %c %c", &old, &new);
    while(str[i]) {
        if(str[i]==old)
            str[i]=new;
        i++;
    }
    printf("%s", str);
return 0;
}

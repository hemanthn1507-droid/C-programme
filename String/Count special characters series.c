#include <stdio.h>
int main() {
    char str[100];
    int i=0, count=0;
    gets(str);
    while(str[i]) {
        if(!( (str[i]>='a'&&str[i]<='z') || 
              (str[i]>='A'&&str[i]<='Z') || 
              (str[i]>='0'&&str[i]<='9') ))
            count++;
        i++;
    }
    printf("Special characters = %d", count);
return 0;
}

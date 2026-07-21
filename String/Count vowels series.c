#include <stdio.h>
int main() {
    char str[100];
    int i=0, count=0;
    scanf("%s", str);
    while(str[i]) {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            count++;
        i++;
    }
    printf("Vowels = %d", count);
}

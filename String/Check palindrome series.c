#include <stdio.h>
int main() {
    char str[100];
    int i=0, j, flag=0;
    scanf("%s", str);
    while(str[i] != '\0') i++;
    for(j=0; j<i/2; j++) {
        if(str[j] != str[i-j-1]) {
            flag=1; break;
        }
    }
    if(flag==0) printf("Palindrome");
    else printf("Not");
}

#include <stdio.h>
int main() {
    char s1[100], s2[100];
    int i=0, flag=0;
    scanf("%s %s", s1, s2);
    while(s1[i] != '\0' || s2[i] != '\0') {
        if(s1[i] != s2[i]) {
            flag = 1;
            break;
        }
        i++;
    }
    if(flag==0) printf("Equal");
    else printf("Not Equal");
}

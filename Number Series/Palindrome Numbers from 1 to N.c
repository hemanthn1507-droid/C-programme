#include <stdio.h>

int main()
{
    int n, i, num, rev, rem;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        num = i;
        rev = 0;

        while(num > 0)
        {
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }

        if(rev == i)
            printf("%d ", i);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int n, i, num, sum, rem;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        num = i;
        sum = 0;

        while(num > 0)
        {
            rem = num % 10;
            sum = sum + rem * rem * rem;
            num = num / 10;
        }

        if(sum == i)
            printf("%d ", i);
    }

    return 0;
}

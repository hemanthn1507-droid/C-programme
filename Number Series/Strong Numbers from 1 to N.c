#include <stdio.h>

int main()
{
    int n, i, num, sum, rem, fact, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        num = i;
        sum = 0;

        while(num > 0)
        {
            rem = num % 10;
            fact = 1;

            for(j = 1; j <= rem; j++)
                fact *= j;

            sum += fact;
            num = num / 10;
        }

        if(sum == i)
            printf("%d ", i);
    }

    return 0;
}

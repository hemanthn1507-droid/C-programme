#include <stdio.h>

int main()
{
    int n, i, square, temp, digits = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        square = i * i;
        temp = i;
        digits = 0;

        while(temp > 0)
        {
            digits++;
            temp /= 10;
        }

        temp = square;

        int match = 1;
        while(i > 0)
        {
            if(i % 10 != temp % 10)
            {
                match = 0;
                break;
            }
            i /= 10;
            temp /= 10;
        }

        if(match)
            printf("%d ", i);
    }

    return 0;
}

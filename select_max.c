#include <stdio.h>
int main()
{
    int a, n, m = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        a = n % 10;
        if (a > m)
        {
            m = a;
        }
        n = n / 10;
    }
    printf("%d", m);
    return 0;
}
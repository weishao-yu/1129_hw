#include <stdio.h>
int main()
{
    int a, n, i = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        a = n % 10;
        i = i + a;
        n = n / 10;
    }
    printf("%d", i);
    return 0;
}
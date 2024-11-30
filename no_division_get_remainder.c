#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &n, &m);
    while (n >= m)
    {
        n = n - m;
    }
    printf("%d", n);
    return 0;
}
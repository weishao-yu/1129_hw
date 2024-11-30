#include <stdio.h>
int main()
{
    int m, n, a, b = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        b = b + m;
    }
    printf("%d", b);
    return 0;
}
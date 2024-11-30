#include <stdio.h>
int main()
{
    int m, n, a = 0;
    scanf("%d %d", &n, &m);
    while (n >= m)
    {
        n = n - m;
        a++;
    }
    printf("%d", a);
    return 0;
}
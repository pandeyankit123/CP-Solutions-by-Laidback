
#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int p, q;
    if (a > b)
    {
        p = a;
    }
    else
    {
        p = b;
    }
    if (c > d)
    {
        q = c;
    }
    else
    {
        q = d;
    }
    if (p > q)
    {
        return p;
    }
    else
    {
        return q;
    }
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

#include <stdio.h>

int main() 
{
    int a,k;
    k=0;
    scanf("%d", &a);
    while (a>0)
    {
        int l=a%10;
        k+=l;
        a/=10;
    }

    printf("%d", k);
    return 0;
}


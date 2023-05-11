#include <stdio.h>

int main() 
{   int T,N;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {   
        scanf("%d", &N);
        int k;
        k=N/2;

        if (N%2==0)
        {
            printf("%d\n", k);
        }
        else
        {
            printf("%d\n", k+1);
        }
    }
    return 0;
}
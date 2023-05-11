#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int N, X;
        scanf("%d %d", &N, &X);
        
        int k = X/3;
        if (k <= N)
        {
            int r = X%3;
            if (r == 0 && X != 0)
            {
                printf("YES\n");
                printf("%d 0 %d\n", k, N-k);
            }
            else if (r == 0 && X == 0)
            {
                printf("YES\n");
                printf("0 0 %d\n", N);
            }
            else if (r == 1 && (k + 3) <= N)
            {
                printf("YES\n");
                printf("%d 2 %d\n", k+1, N-(k+3));
            }
            else if (r == 2 && (k + 2) <= N)
            {
                printf("YES\n");
                printf("%d 1 %d\n", k+1, N-(k+2));
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}

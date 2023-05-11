    #include <stdio.h>

    int main() 
    {
        int t,x,y;
        scanf("%d", &t);
        for(int i; i<t; i++)
        {
            scanf("%d %d", &x, &y);
            printf("%d\n", 4*x+y);
        }
        return 0;
    }


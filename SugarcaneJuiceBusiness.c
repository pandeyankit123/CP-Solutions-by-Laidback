#include<stdio.h>



int main()
{
    int t,a,b;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &a);

        b=a*50;
        int x= b*0.2 + b*0.2 + b*0.3;

        {printf("%d\n", b-x);}
    }
    return 0;
}
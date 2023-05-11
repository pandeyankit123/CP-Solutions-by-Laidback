#include<stdio.h>

int race( int a, int b, int c)
{
    if (a==b || a==c)
    {return 0;}
    else
    {return 1;}
}

int main()
{
   int T,S,p,q;

   scanf("%d", &T);

   for (int i = 0; i < T; i++)
   {
       scanf("%d", &S);

       p=S+1;
       q=p*(-1);

        printf("%d\n", q);
   }
   
   return 0;
}

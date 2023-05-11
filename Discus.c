#include <stdio.h>

int max(int a, int b, int c)
{   int p;
    if(a>b){p=a;}
    else{p=b;}
    if(p>c){return p;}
    else{return c;}
}


int main(){
    int T, A, B, C;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d", &A, &B, &C);
        int ans = max(A, B, C);
        printf("%d\n", ans);
    }
    return 0;
}

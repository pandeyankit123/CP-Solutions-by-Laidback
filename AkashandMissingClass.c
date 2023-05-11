#include <stdio.h>

int main(){
    int T, N;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++)
    {    scanf("%d", &N);
        if (N<6){ printf("0\n");}
        
    else
    {  
        int buc = (N-6)/7;
        printf("%d\n", buc+1);
    }
    }
    return 0;
}

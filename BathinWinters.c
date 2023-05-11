#include <stdio.h>

int main(){
    int T, X, Y;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &X, &Y);
        int buc = X/Y;
        int pep = buc/2;
        printf("%d\n", pep);
    }
    return 0;
}
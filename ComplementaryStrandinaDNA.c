#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	
	while (T--) {
	    int n;
	    char s[100];
	    scanf("%d", &n);
	    scanf("%s", s);
	    
	    for (int i=0; i<n; i++) {
	         if (s[i] == 'A') {
	             printf("T");
		     }
		     else if (s[i] == 'T') {
		         printf("A");
		     }
		     else if (s[i] == 'C') {
		         printf("G");
		     }
		     else if (s[i] == 'G') {
		         printf("C");
		     }
	  }
	  printf("\n");
	}
	return 0;
}
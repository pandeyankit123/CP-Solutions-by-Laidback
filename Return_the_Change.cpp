#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int x; cin>>x;
	    if(x%10==5)
	        x+=5;
	    else if(x%10<5)
	        x-=x%10;
	    else x+=(10-x%10);
	    cout<<100-x<<endl;
	}
	return 0;
}
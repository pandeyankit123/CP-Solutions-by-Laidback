#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n,m; cin>>n>>m;
	    int ans=m*6*6;
	    if(ans>=n)
	        cout<<"YES"<<endl;
	   else cout<<"NO"<<endl;
	}
	return 0;
}
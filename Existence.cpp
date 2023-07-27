#include <iostream>
using namespace std;
#define ll long long

int main() {
	int t; cin>>t;
	while(t--){
	    ll x,y; cin>>x>>y;
	    if(x*x==2*y)
	        cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
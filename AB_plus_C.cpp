#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e6;

int main() {
    int t; cin>>t;
	while(t--){
	    ll x; cin>>x;
	    if(x==1)
	        cout<<-1<<endl;
	    else if(x<=N)
	        cout<<1<<" "<<1<<" "<<x-1<<endl;
	    else if(x%N==0)
	        cout<<(x/N)-1<<" "<<N<<" "<<N<<endl;
	    else
	        cout<<x/N<<" "<<N<<" "<<x%N<<endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,x,b,y;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>a>>x>>b>>y;
	    float sa=(float)a/x;
	    float sb=(float)b/y;
	    if(sa==sb)
	        cout<<"EQUAL"<<endl;
	    else if(sa==max(sa,sb))
	        cout<<"ALICE"<<endl;
	   else if(sb==max(sa,sb))
	        cout<<"BOB"<<endl;
	}
	return 0;
}

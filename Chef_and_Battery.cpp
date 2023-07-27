#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int diff=n-50;
	    if(diff==0)
	        cout<<0<<endl;
	    else if(diff>0){
	        int time=0;
	        time+=diff/3;
	        diff%=3;
	        if(diff==1)
	            time+=2;
	        else if(diff==2){
	            time+=4;
	        }
	        cout<<time<<endl;
	    }
	    else{
	        diff=abs(diff);
	        int time=0;
	        time+=diff/2;
	        diff%=2;
	        if(diff)
	            time+=3;
	        cout<<time<<endl;
	    }
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<int> v(n);
	    for(int i=0; i<n; i++)
	        cin>>v[i];
	    int ans=20000, var;
	    for(int i=0; i<n; i++){
	        if(i==0){
	            var=abs(v[i]-v[i+1]);
	            if(var<ans){
	                ans=var;
	            }
	        }
	        else if(i==n-1){
	            var=abs(v[i]-v[i-1]);
	            if(var<ans){
	                ans=var;
	            }
	        }
	        else{
	            int var1=abs(v[i]-v[i+1]);
	            int var2=abs(v[i]-v[i-1]);
	            var=max(var1, var2);
	            if(var<ans){
	                ans=var;
	            }
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
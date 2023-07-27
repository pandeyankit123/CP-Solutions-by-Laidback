#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    string str; cin>>str;
	    int cnt1=0, cnt0=0; 
	    for(int i=0; i<n; i++){
	        if(str[i]=='1')
	            cnt1++;
	        else cnt0++;
	    }
	    int mn=min(cnt1, cnt0);
	    if(mn%2)
	        cout<<"Zlatan"<<endl;
	    else cout<<"Ramos"<<endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        int max1=-1, max2=-1;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]>max1)
                max2=max1, max1=v[i];
            if(v[i]>max2 && v[i]<max1)
                max2=v[i];
        }
        cout<<max1+max2<<endl;
    }
	return 0;
}
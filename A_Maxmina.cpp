#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> v(n);
        bool flag=false;
        for (int i = 0; i < n; i++){
            cin>>v[i];
            if(v[i]==1)
                flag=true;
        }
        if(flag==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
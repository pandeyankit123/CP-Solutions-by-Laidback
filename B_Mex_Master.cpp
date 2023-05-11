#include<bits/stdc++.h>
using namespace std;
#define pb push_back
const int N=2e5+7;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        int mn=INT_MAX, mx=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]<mn) mn=v[i];
            if(v[i]>mx) mx=v[i];
        }
        if(mn!=0)
            cout<<0<<endl;
        else{
            int cnt0=0;
            for(int i=0; i<n; i++)
                if(v[i]==0) cnt0++;
            if(cnt0>1){
                int cntn0=n-cnt0;
                int diff=cntn0-cnt0;
                if(diff>=-1)
                    cout<<0<<endl;
                else{
                    if(mx==1){
                        int cnt1=n-cnt0;
                        diff=cnt1-cnt0;
                        if(diff>=-1 && diff<=1 )
                            cout<<0<<endl;
                        else if(diff>1)
                            cout<<3<<endl;
                        else
                            cout<<2<<endl;
                    }
                    else cout<<1<<endl;
                }
            }
            else if(cnt0=1 && n==1) cout<<1<<endl;
            else cout<<0<<endl;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=2e5;

int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++)
            cin>>v[i];
        sort(v.begin(), v.end());
        if(v[0]!=1){
            cout<<"NO"<<endl;
            continue;
        }
        vector<ll> prefix(n);
        prefix[0]=v[0];
        for(ll i=1; i<n; i++)
            prefix[i]=v[i]+prefix[i-1];
        bool flag=true;
        for(ll i=1; i<n; i++){
            if(v[i]>prefix[i-1]){
                flag=false;
                break;
            }
        }    
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
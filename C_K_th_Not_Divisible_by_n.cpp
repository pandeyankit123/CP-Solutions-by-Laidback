#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while(t--){
        ll n,k; cin>>n>>k;
        ll ans=(n*k)/(n-1);
        if(ans%n)
            cout<<ans<<endl;
        else cout<<ans-1<<endl;
    }
    return 0;
}
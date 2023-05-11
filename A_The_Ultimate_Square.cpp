#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans=n/2;
        if(n%2!=0)
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}
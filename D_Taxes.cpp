#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n; cin>>n;
    ll copy=n;
    if(n<=3)
        cout<<1;
    else{
        if(n%2){
            ll cnt=0;
            for(ll i=2; i*i<=n; i++){
                while(n%i==0){
                    cnt++;
                    n/=i;
                }
            }
            if(n>1) cnt++;
            if(cnt==1) cout<<cnt;
            else{
                copy-=2;
                ll cnt=0;
                for(ll i=2; i*i<=copy; i++){
                    while(copy%i==0){
                        cnt++;
                        copy/=i;
                    }
                }
                if(copy>1) cnt++;
                if(cnt==1) cout<<2;
                else cout<<3;
            }
        }
        else
            cout<<2;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll comb2(ll n){
    return ((n*(n-1))/2);
}

int main(){
    ll n,m; cin>>n>>m;
    ll max=comb2(n-m+1);
    ll a=n/m, b=n%m;
    ll minp1=comb2(a+1)*b;
    ll minp2=comb2(a)*(m-b);
    cout<<minp1+minp2<<" "<<max;
    return 0;
}
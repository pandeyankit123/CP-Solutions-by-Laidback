#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll indexofmid(ll mid, ll n, ll m){
    ll sum=0;
    for(int i=1; i<=n; i++)
        sum+=min(mid/i, m);
    return sum;
}

int main(){
    ll n,m,k; cin>>n>>m>>k;
    ll low=1, high=n*m;
    while(low<=high){
        ll mid=(low+high)/2;
        if(indexofmid(mid, n, m)<k)
            low=mid+1;
        else high=mid-1;
    }
    cout<<low;
    return 0;
}
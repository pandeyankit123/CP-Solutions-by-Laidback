#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll sum(ll n){
    return ((n*(n+1))/2);
}

int main(){
    ll n,k;
    cin>>n>>k;
    if(n==1){
        cout<<"0";
        return 0;
    }
    if(k>=n)
        cout<<"1";
    else{
        ll sumk=sum(k)-k+1;
        if(sumk<n)
            cout<<"-1";
        else{
            ll ans;
            ll high=k, low=2;
            while(low<=high){
                ll mid=(high+low)/2;
                ll sumk2=sum(k)-sum(mid-1)-k+mid;
                if(sumk2>=n){
                    ans=k-mid;
                    if(sumk2==n)
                        break;
                    low=mid+1;
                }
                else
                    high=mid-1;
            }
            cout<<ans+1;
        }
    }
    return 0;
}
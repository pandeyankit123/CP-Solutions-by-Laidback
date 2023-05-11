/*  Waadon se apne mukarta nahin,          */
/*  Question se main kabhi darta nahin.    */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback...                            */


#include<bits/stdc++.h>
using namespace std;

#define all(v) v.begin(),v.end()
#define ll long long
#define pb push_back
#define po pop_back
#define bg() begin()
#define ed() end()
#define ss second
#define ff first

ll mod=998244353;
ll a[200001],b[200001];

int main(){
    ll n; cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        a[i]=(a[i]*(n-i)*(i+1));
    }
    for(ll i=0;i<n;i++)
        cin>>b[i];
    sort(b,b+n); sort(a,a+n);
    ll sum=0;
    for(ll i=0;i<n;i++){
        a[i]%=mod;
        sum=(sum+a[i]*b[n-1-i])%mod;
    }
    cout<<sum;
}


/*
    
*/
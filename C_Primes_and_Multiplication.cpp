/*  Waadon se apne mukarta nahin,          */
/*  Question se main kabhi darta nahin.    */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback...                            */


#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define coutall(v) for(int i=0; i<v.size(); i++) cout<<v[i]<<" "; cout<<endl;
#define cinall(v) for(int i=0; i<v.size(); i++) cin>>v[i];
#define all(v) v.begin(),v.end()
#define newl cout<<endl;
#define ll long long
#define pb push_back
#define po pop_back
#define ss second
#define ff first

const int MOD=1e9+7;
const int N=1e7+10;

ll getexp(ll n, ll p){
    ll exp=0;
    while(n>0){
        exp+=n/p;
        n/=p;
    }
    return exp;
}

ll pow(ll x, ll y){
    if(y==0)
        return 1;
    ll res=1;
    while(y>0){
        if(y%2==1){
            res=(res*x)%MOD;
            y--;
        }
        x=(x*x)%MOD;
        y/=2;
    }
    return res;
}

int main(){
    fastIO;
    // int t; cin>>t;
    int t=1;
    while(t--){
        ll x,n; cin>>x>>n;
        vector<int> primes;
        for(int i=2; i*i<=x; i++){
            if(x%i==0){
                primes.pb(i);
                while(x%i==0)
                    x/=i;
            }
        }
        if(x>1)
            primes.pb(x);
        ll ans=1;
        for(int i=0; i<primes.size(); i++){
            ll p=primes[i];
            ll exp=getexp(n,p);
            ll powp=pow(p, exp);
            ans*=powp;
            ans%=MOD;
        }
        cout<<ans;
    }
    return 0;
}


/*
    
*/
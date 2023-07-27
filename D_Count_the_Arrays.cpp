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

const ll MOD=998244353;
const int N=1e5+7;

ll qpow(ll a,ll b){ 
    ll res=1;
    while(b>0){
        if(b&1) (res*=a)%=MOD;
        (a*=a)%=MOD;
        b>>=1;
    }
    return res;
}

int main(){
    fastIO;
    // int t; cin>>t;
    int t=1;
    while(t--){
        ll n,m; cin>>n>>m;
	    ll ans=(n-2)*qpow(2,n-3)%MOD;
	    for(ll i=0;i<=n-2;i++)
		    ans=ans*(m-i)%MOD*qpow((n-1-i),MOD-2)%MOD;
	    cout<<ans<<endl;
    }
    return 0;
}


/*
    
*/
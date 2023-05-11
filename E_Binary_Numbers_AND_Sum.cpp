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

const int MOD=998244353;
const int N=2e5+5;


int main(){
    fastIO;
    vector<ll> pow2m(N,2);
    pow2m[0]=1;
    for(int i=2; i<N; i++)
        pow2m[i]*=pow2m[i-1], pow2m[i]%=MOD;
    int n,m; cin>>n>>m;
    string sn, sm; cin>>sn>>sm;
    if(n>m){
        string ad="";
        for(int i=0; i<n-m; i++)
            ad+="0";
        sm=ad+sm;
    }
    else{
        string ad="";
        for(int i=0; i<m-n; i++)
            ad+="0";
        sn=ad+sn; n=m;
    }
    int i=0, no=0;
    ll ans=0;
    while(i<n){
        if(sm[i]=='1')
            no++;
        if(sn[i]=='1'){
            ll var=(pow2m[n-1-i]*no)%MOD;
            ans+=var; ans%=MOD;
        }
        i++; 
    }
    cout<<ans;
    return 0;
}


/*
    01001
    10101
*/
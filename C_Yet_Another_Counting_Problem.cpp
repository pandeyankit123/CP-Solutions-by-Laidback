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

const int MOD=1e7+10;
const int N=1e7+10;

ll findx(ll ind, vector<ll> pre){
    ll n=ind/pre.size();
    ll rem=ind%pre.size();
    return n*pre[pre.size()-1] + pre[rem];
}

int main(){
    fastIO;
    int t; cin>>t;
    // int t=1;
    while(t--){
        int a,b,q; cin>>a>>b>>q;
        vector<ll> pre(a*b, 0);
        for(int i=1; i<a*b; i++){
            pre[i]=pre[i-1];
            if(((i%a)%b)!=((i%b)%a))
                pre[i]++;
        }
        while(q--){
            ll l,r; cin>>l>>r;
            ll left=findx(l-1, pre);
            ll right=findx(r, pre);
            ll ans=right-left;
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}


/*
    
*/

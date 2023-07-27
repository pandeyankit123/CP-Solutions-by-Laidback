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

ll ans(ll l, ll r){
    if(l==r)
        return l;
    ll num=1;
    while(num*2<=r)
        num*=2;
    if(num<=l)
        return ans(l-num, r-num)+num;
    else if(num*2-1<=r)
        return num*2-1;
    else
        return num-1;
}

int main(){
    fastIO;
    int t; cin>>t;
    // int t=1;
    while(t--){
        ll l,r; cin>>l>>r;
        cout<<ans(l, r)<<endl;
    }
    return 0;
}


/*
    
*/
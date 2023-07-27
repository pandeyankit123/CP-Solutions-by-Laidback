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

void call(ll l, ll r, ll d, ll ans, bool isright){
    if(l==r){
        cout<<ans;
        return;
    }   
    ll mid=(l+r)/2;
    if(isright){
        if(d>mid)
            call(mid+1, r, d, ans+r-l+1, true);
        else
            call(l, mid, d, ans+1, false);
    }
    else{
        if(d>mid)
            call(mid+1, r, d, ans+1, true);
        else
            call(l, mid, d, ans+r-l+1, false);
    }

}

int main(){
    fastIO;
    // int t; cin>>t;
    int t=1;
    while(t--){
        ll h,n; cin>>h>>n;
        ll pow2h=pow(2, h);
        call(1, pow2h, n, 0, true);
    }
    return 0;
}


/*
    
*/
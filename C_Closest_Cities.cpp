/*      __      ___      ______   ______    _____       ___      _____   _    __
       / /     / \ \    |__  __| | |  \ \  | |  \ \    / \ \    |  ___| | |  / /
      / /     / /_\ \      ||    | |   | | | |__/ /   / /_\ \   | |     | | / /
     / /___  / /---\ \   __||__  | |   | | | |  \ \  / /---\ \  | |___  | | \ \
    /_____/ /_/     \_\ |______| |_|__/_/  |_|__/_/ /_/     \_\ |_____| |_|  \_\ 

    Waadon se apne mukarta nahin,
    Question se main kabhi darta nahin.
    Laidback O Laidback!
    Laidback O Laidback!
    Laidback O Laidback!
    Laidback...
*/


#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define coutall(v) for(auto it : v) cout<<it<<" "; cout<<endl
#define cinall(v) for(int z=0; z<v.size(); z++) cin>>v[z]
#define fr(i,n,z) for(int i=n-1; i>=z; i--)
#define cout2n(n, m) cout<<n<<" "<<m<<endl
#define fo(i,z,n) for(int i=z; i<n; i++)
#define all(v) v.begin(),v.end()
#define coutn(n) cout<<n<<endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define newl cout<<endl;
#define int long long
#define pf push_front
#define pof pop_front
#define pb push_back
#define po pop_back
#define ss second
#define ff first

const int MOD=1e7+10;
const int N=1e7+10;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.ff!=b.ff)
        return a.ff<b.ff;
    return a.ss<b.ss;
}

signed main(){
    fastIO;
    int T; cin>>T;
    // int T=1;
    while(T--){
        int n; cin>>n;
        vector<int> v(n), pre(n, 0), suf(n, 0);
        cinall(v); pre[1]=1; suf[n-2]=1;
        fo(i,1,n-1){
            int lft=v[i]-v[i-1], rgt=v[i+1]-v[i];
            if(rgt<lft) pre[i+1]=1+pre[i];
            else pre[i+1]=rgt+pre[i];
        } fr(i,n-1,1){
            int lft=v[i]-v[i-1], rgt=v[i+1]-v[i];
            if(lft<rgt) suf[i-1]=suf[i]+1;
            else suf[i-1]=suf[i]+lft;
        } int q; cin>>q;
        while (q--){
            int l,r; cin>>l>>r;
            if(r>l) coutn(pre[r-1]-pre[l-1]);
            else coutn(suf[r-1]-suf[l-1]);
        }
    } return 0;
}


/*
    
*/
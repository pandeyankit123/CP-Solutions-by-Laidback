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
#define coutall(v) for(auto &it: v) cout<<it<<" "; cout<<endl
#define fr(i,n,z) for(int i=n-1; i>=z; i--)
#define cinall(v) for(auto &it: v) cin>>it
#define cout2n(n,m) cout<<n<<" "<<m<<endl
#define fo(i,z,n) for(int i=z; i<n; i++)
#define all(v) v.begin(),v.end()
#define coutn(n) cout<<n<<endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define newl cout<<endl;
#define int long long
#define pof pop_front
#define pf push_front
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
        int n,k,m; cin>>n>>m>>k;
        vector<int> a(n), b(m);
        cinall(a);
        map<int,int> mp, mp2;
        fo(i,0,m) cin>>b[i], mp[b[i]]++;
        int ans=0, cnt=0;
        fo(i,0,m-1){
            if(mp2[a[i]]<mp[a[i]]) cnt++;
            mp2[a[i]]++;
        } fo(i,m-1,n){
            if(mp2[a[i]]<mp[a[i]]) cnt++;
            mp2[a[i]]++;
            if(cnt>=k) ans++;
            int l=a[i-(m-1)];
            mp2[l]--;
            if(mp[l] && mp2[l]<mp[l]) cnt--;
        } coutn(ans);
    } return 0;
}


/*
    
*/
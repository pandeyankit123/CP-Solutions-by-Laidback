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

int rec(int idx, int k, vector<int> &v, int n, vector<vector<int>> &dp){
    if(idx>=n || k==0) return 0;
    if(dp[idx][k]!=-1) return dp[idx][k];
    int ans=0, sum=0, mn=1e18;
    fo(i,idx,min(n-1, idx+k)+1){
        mn=min(mn, v[i]);
        sum+=v[i];
        int len=(i-idx+1);
        ans=min(ans, ((len*mn)-sum)+rec(i+1, k-(len-1), v, n, dp));
    } return dp[idx][k]=ans;
}

signed main(){
    fastIO;
    int T; cin>>T;
    // int T=1;
    while(T--){
        int n,k; cin>>n>>k;
        vector<int> v(n);
        int sum=0;
        fo(i,0,n) cin>>v[i], sum+=v[i];
        vector<vector<int>> dp(n+1, vector<int>(k+1, -1));
        int sub=rec(0, min(k,n), v, n, dp);
        coutn(sum+sub);
    } return 0;
}


/*
    
*/
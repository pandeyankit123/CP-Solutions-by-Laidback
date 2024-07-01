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

void dfs(int v, int p, vector<vector<int>> &g, vector<int> &cnt){
    if(g[v].size()==1 && g[v][0]==p)
        cnt[v]=1;
    else for(auto u:g[v]) if(u!=p)
        dfs(u,v,g,cnt), cnt[v]+=cnt[u];
}

signed main(){
    fastIO;
    int T; cin>>T;
    // int T=1;
    while(T--){
        int n; cin>>n;
        vector<vector<int>> g(n);
        vector<int> cnt(n, 0);
        fo(i,0,n-1){
            int u,v; cin>>u>>v;
            u--; v--;
            g[u].pb(v); g[v].pb(u);
        } dfs(0, -1, g, cnt);
        int q; cin>>q;
        while(q--){
            int x, y; cin>>x>>y;
            x--; y--;
            coutn(cnt[x]*cnt[y]);
        }
    }
    return 0;
}


/*
    
*/
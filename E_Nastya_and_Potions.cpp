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
        int n,k; cin>>n>>k;
        vector<int> v(n), deg(n), order;
        cinall(v);
        fo(i,0,k){
            int p; cin>>p;
            v[p-1]=0;
        }vector<vector<int>> g(n);
        fo(i,0,n){
            int m; cin>>m;
            while(m--){
                int e; cin>>e;
                deg[e-1]++;
                g[i].pb(e-1);
            }
        } queue<int> q;
        fo(i,0,n) if(deg[i]==0) q.push(i);
        while(!q.empty()){
            order.pb(q.front());
            for(auto &u:g[q.front()]){
                deg[u]--;
                if(deg[u]==0) q.push(u);
            } q.pop();
        } reverse(all(order));
        vector<int> sol=v;
        for(auto &it: order){
            int sum=0;
            for(auto &u: g[it])
                sum+=sol[u];
            if(g[it].size()>0) sol[it]=min(sol[it], sum);
        } coutall(sol);
    } return 0;
}


/*
    
*/
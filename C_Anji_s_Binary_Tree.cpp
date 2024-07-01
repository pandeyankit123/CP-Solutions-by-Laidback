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

int dfs(int i, string &s, vector<int> &l, vector<int> &r){
	if(l[i]==0 && r[i]==0) return 0;
	int le=dfs(l[i], s, l, r), re=dfs(r[i], s, l, r);
	return min(le+(s[i]!='L'), re+(s[i]!='R'));
}   

signed main(){
    fastIO;
    int T; cin>>T;
    // int T=1;
    while(T--){
        int n; cin>>n;
        string s; cin>>s;
        vector<int> adj[n+1];
        fo(i,1,n+1){
            int l,r; cin>>l>>r;
            adj[i].pb(l); adj[i].pb(r);
        } int cnt=0, ans=1e9;
        queue<pair<int,int>> q;
        q.push({1,0});
        while(!q.empty()){
            int node=q.front().ff;
            int dis=q.front().ss;
            q.pop();
            int left=adj[node][0];
            int right=adj[node][1];
            if(left==0 && right==0)
                ans=min(ans, dis);
            if(left!=0){
                if(s[node-1]=='L') q.push({left, dis});
                else q.push({left, dis+1});
            } if(right!=0){
                if(s[node-1]=='R') q.push({right, dis});
                else q.push({right, dis+1});
            }
        } coutn(ans);
    } return 0;
}


/*
    
*/
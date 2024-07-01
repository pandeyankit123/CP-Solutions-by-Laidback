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
#define coutall(v) for(int z=0; z<v.size(); z++) cout<<v[z]<<" "; cout<<endl
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

int cal(int i, int j, int n, int m, vector<vector<int>> &hash, vector<vector<int>> &v){
    int cnt=0; hash[i][j]=1;
    if(i+1<n && hash[i+1][j]==0 && v[i+1][j]!=0)
        cnt+=cal(i+1,j,n,m,hash,v);
    if(i-1>=0 && hash[i-1][j]==0 && v[i-1][j]!=0)
        cnt+=cal(i-1,j,n,m,hash,v);
    if(j-1>=0 && hash[i][j-1]==0 && v[i][j-1]!=0)
        cnt+=cal(i,j-1,n,m,hash,v);
    if(j+1<m && hash[i][j+1]==0 && v[i][j+1]!=0)
        cnt+=cal(i,j+1,n,m,hash,v);
    return cnt+v[i][j];
}

signed main(){
    fastIO;
    int T; cin>>T;
    // int T=1;
    while(T--){
        int n,m; cin>>n>>m;
        vector<vector<int>> v(n, vector<int>(m)), hash(n, vector<int>(m,0));
        fo(i,0,n) {cinall(v[i]);}
        int ans=0;
        fo(i,0,n)
            fo(j,0,m)
                if(hash[i][j]==0 && v[i][j]!=0) 
                    ans=max(ans, cal(i,j,n,m,hash,v));
        coutn(ans);
    }
    return 0;
}


/*
    
*/
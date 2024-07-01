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
#define coutall(v) for(int i=0; i<v.size(); i++) cout<<v[i]<<" "; cout<<endl
#define cinall(v) for(int i=0; i<v.size(); i++) cin>>v[i]
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
const int N=1e18+10;

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
        int n,k,a,b; cin>>n>>k>>a>>b;
        vector<pair<int, int>> v(n, {0,0});
        fo(i,0,n)
            cin>>v[i].ff>>v[i].ss;
        if(a<=k && b<=k) coutn(0);
        else if(a<=k){
            int cend, dist=N;
            a--, b--;
            fo(i,0,k)
                if(i!=b && (abs(v[i].ff-v[b].ff)+abs(v[i].ss-v[b].ss))<dist) 
                    dist=abs(v[i].ff-v[b].ff)+abs(v[i].ss-v[b].ss), cend=i;
            coutn(min(dist, (abs(v[b].ff-v[a].ff)+abs(v[b].ss-v[a].ss))));
        }else if(b<=k){
            int cst, dist=N;
            a--, b--;
            fo(i,0,k)
                if(i!=a && (abs(v[i].ff-v[a].ff)+abs(v[i].ss-v[a].ss))<dist) 
                    dist=abs(v[i].ff-v[a].ff)+abs(v[i].ss-v[a].ss), cst=i;
            coutn(min(dist, (abs(v[b].ff-v[a].ff)+abs(v[b].ss-v[a].ss))));
        }else{
            int cst=-1, cend=-1, dist1=N, dist2=N;
            a--, b--;
            fo(i,0,k){
                if(i!=a && (abs(v[i].ff-v[a].ff)+abs(v[i].ss-v[a].ss))<dist1) 
                    dist1=abs(v[i].ff-v[a].ff)+abs(v[i].ss-v[a].ss), cst=i;
                if(i!=b && (abs(v[i].ff-v[b].ff)+abs(v[i].ss-v[b].ss))<dist2) 
                    dist2=abs(v[i].ff-v[b].ff)+abs(v[i].ss-v[b].ss), cend=i;
            } if(cst==cend) coutn((abs(v[b].ff-v[a].ff)+abs(v[b].ss-v[a].ss)));
            else coutn(min(dist1+dist2, (abs(v[b].ff-v[a].ff)+abs(v[b].ss-v[a].ss))));
        }
    }
    return 0;
}


/*
    
*/


/*     __     ___     ____   _____    ____      ___     ____   _   __
      / /    / \ \   |_  _| | | \ \  | | \ \   / \ \   |  __| | | / /
     / /__  / /-\ \   _||_  | |  | | | |-< <  / /-\ \  | |__  | |< <
    /____/ /_/   \_\ |____| |_|_/_/  |_|_/_/ /_/   \_\ |____| |_| \_\ ,
*/
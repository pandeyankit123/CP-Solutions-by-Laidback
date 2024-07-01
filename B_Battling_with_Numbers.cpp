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

const int MOD=998244353;
const int N=1e7+10;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.ff!=b.ff)
        return a.ff<b.ff;
    return a.ss<b.ss;
}

signed main(){
    fastIO;
    // int T; cin>>T;
    int T=1;
    while(T--){
        int n; cin>>n;
	    vector<int> a(n); cinall(a);
	    vector<int> b(n); cinall(b);
        int m; cin>>m;
	    vector<int> c(m); cinall(c);
	    vector<int> d(m); cinall(d);
        map<int,int> mp;
	    fo(i,0,n) mp[a[i]]=b[i];
	    fo(i,0,m) mp[c[i]]-=d[i];
	    int cnt=0, f=1;
	    for(auto it: mp){
		    if(it.ss>0) cnt++;
		    if(it.ss<0) {f=0; break;}
	    } if(f){
	        int ans=1;
	        while(cnt--)
		        ans=(ans*2)%MOD;
	        coutn(ans);
        }else coutn(0);
    } return 0;
}


/*
    
*/
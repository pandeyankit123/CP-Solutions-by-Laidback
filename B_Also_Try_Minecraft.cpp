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
        int n,m; cin>>n>>m;
        vector<int> v(n);
        cinall(v);
        vector<int> forw={0};
        int sum=0;
        fo(i,0,n-1){
            if(v[i+1]<v[i])
                sum+=(v[i]-v[i+1]);
            forw.pb(sum);
        } sum=0;
        vector<int> backw={0};
        fr(i,n,1){
            if(v[i-1]<v[i])
                sum+=(v[i]-v[i-1]);
            backw.pb(sum);
        } while(m--){
            int s,t; cin>>s>>t;
            if(s<=t)
                coutn(forw[t-1]-forw[s-1]);
            else
                coutn(abs(backw[n-s]-backw[n-t]));
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
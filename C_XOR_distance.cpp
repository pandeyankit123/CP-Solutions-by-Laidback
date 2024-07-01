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
        int a,b,r; cin>>a>>b>>r;
        if(b>a) swap(a, b);
        int maxbit=-1, st=0;
        int x=0, y=0, f=0;
        fr(j,61,0){
            int abit=0, bbit=0;
            if((a&(1ll<<j))) abit=1;
            if((b&(1ll<<j))) bbit=1;
            if(abit==bbit && (r&(1ll<<j))) f=1;
            if(abit==bbit) continue;
            if(st==0){
                st= 1; x+=(1ll<<j);
                if((r&(1ll<<j))) f=1;
            }else{
                if(abit==0 && bbit==1){
                    y+=(1ll<<j);
                    if((r&(1ll<<j))) f=1;
                }else{
                    if((r&(1ll<<j)) || f) y+=(1ll<<j);
                    else{
                        x+=(1ll<<j);
                        if((r&(1ll<<j))) f=1;
                    } 
                }
            }
        } coutn(x-y);
    } return 0;
}


/*
    
*/
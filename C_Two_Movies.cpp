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
        int n; cin>>n;
        vector<int> a(n), b(n);
        cinall(a); cinall(b);
        int cnt=0, bothp=0, bothneg=0;
        fo(i,0,n){
            if(a[i]==b[i]){
                if(a[i]==1) bothp++;
                else if(a[i]==-1) bothneg--;
            }
        } int suma=0, sumb=0;
        fo(i,0,n){
            if(a[i]!=b[i]){
                if(a[i]>b[i]) suma+=a[i];
                else sumb+=b[i];
            }
        } if(suma>sumb) swap(suma, sumb);
        int rem=min(sumb-suma, bothp);
        suma+=rem; bothp-=rem;
        rem=bothp/2; bothp-=rem;
        suma+=max(rem, bothp); sumb+=min(rem, bothp);
        // cout2n(rem, cnt)
        if(suma>sumb) swap(suma, sumb);
        rem=max(suma-sumb, bothneg);
        sumb+=rem; bothneg-=rem;
        rem=bothneg/2; bothneg-=rem;
        suma+=max(rem, bothneg); sumb+=min(rem, bothneg);
        coutn(min(suma, sumb));
    } return 0;
}

/*

*/
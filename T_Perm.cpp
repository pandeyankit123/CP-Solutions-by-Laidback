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

const int MOD=1e9+7;
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
        if(n%3==0){
            for(int i=1; i<=n; i+=3)
                cout<<i<<" "<<i+2<<" "<<i+1<<" ";
            newl;
        }else if(n%3==1){
            for(int i=1; i<=n-4; i+=3)
                cout<<i<<" "<<i+2<<" "<<i+1<<" ";
            cout<<n<<" "<<n-1<<" "<<n-2<<" "<<n-3<<endl;
        }else{
            cout<<"4 5 2 1 3 ";
            for(int i=6; i<=n; i+=3)
                cout<<i+2<<" "<<i+1<<" "<<i<<" ";
            newl;
        }
    } return 0;
}


/*
    
*/
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
        int n, m; cin>>n>>m;
        vector<string> v(n);
        cinall(v);
        if(v[0][0]==v[n-1][m-1] || v[0][m-1]==v[n-1][0]) yes;
        else{
            int flag=true;
            if(v[0][0]==v[0][m-1] && flag){
                bool f=false;
                fo(i,0,m){
                    if(v[n-1][i]==v[0][0]) {f=true; break;};
                } if(f) yes, flag=false;
            } if(v[0][0]==v[n-1][0] && flag){
                bool f=false;
                fo(i,0,n){
                    if(v[i][m-1]==v[0][0]) {f=true; break;};
                } if(f) yes, flag=false;
            } if(v[0][m-1]==v[0][0] && flag){
                bool f=false;
                fo(i,0,m){
                    if(v[n-1][i]==v[0][m-1]) {f=true; break;};
                } if(f) yes, flag=false;
            } if(v[0][m-1]==v[n-1][m-1] && flag){
                bool f=false;
                fo(i,0,n){
                    if(v[i][0]==v[0][m-1]) {f=true; break;};
                } if(f) yes, flag=false;
            } if(v[n-1][m-1]==v[n-1][0] && flag){
                bool f=false;
                fo(i,0,m){
                    if(v[0][i]==v[n-1][m-1]) {f=true; break;};
                } if(f) yes, flag=false;
            } if(v[n-1][m-1]==v[0][m-1] && flag){
                bool f=false;
                fo(i,0,n){
                    if(v[i][0]==v[n-1][m-1]) {f=true; break;};
                } if(f) yes, flag=false;
            } if(v[n-1][0]==v[0][0] && flag){
                bool f=false;
                fo(i,0,n){
                    if(v[i][m-1]==v[n-1][0]) {f=true; break;};
                } if(f) yes, flag=false;
            } if(v[n-1][0]==v[n-1][m-1] && flag){
                bool f=false;
                fo(i,0,m){
                    if(v[0][i]==v[n-1][0]) {f=true; break;};
                } if(f) yes, flag=false;
            } if(flag) no;
        }
    } return 0;
}


/*
    
*/
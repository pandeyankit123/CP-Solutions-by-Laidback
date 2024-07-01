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
        if(n==1){
            cout2n(1,1);
            cout<<1<<" "<<1<<" "<<1<<endl;
        }else if(n==2){
            cout2n(7,3);
            cout<<1<<" "<<1<<" "<<1<<" "<<2<<endl;
            cout<<1<<" "<<2<<" "<<1<<" "<<2<<endl;
            cout<<2<<" "<<1<<" "<<1<<" "<<2<<endl;
        }else{
            vector<int> per(n);
            fo(i,0,n) per[i]=i+1;
            vector<pair<int,int>> pr;
            fr(i,n+1,1){
                pr.pb({1,i});
                pr.pb({2,i});
            } int sum=0;
            fo(i,0,n) fo(j,0,n)
                sum+=max(i+1, j+1);
            cout2n(sum, 2*n);
            fo(i,0,pr.size()){
                cout<<pr[i].ff<<" "<<pr[i].ss<<" ";
                coutall(per);
            }
        }
    } return 0;
}


/*
    
*/
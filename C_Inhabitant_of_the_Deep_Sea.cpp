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
        int n,k; cin>>n>>k;
        deque<int> q;
        fo(i,0,n){
            int a; cin>>a;
            q.pb(a);
        } while(!q.empty() && k>0){
            if(q.size()==1){
                if(k>=q.front()) q.pof();
                else break;
            }else{
                int mn=min(q.front(), q.back());
                if(mn==q.front() && mn==q.back()){
                    if(k>=2*mn)
                        k-=2*mn, q.po(), q.pof();
                    else if(k==(2*mn)-1)
                        {k-=(2*mn)-1; q.pof(); break;}
                    else break;
                }else if(mn==q.front()){
                    if(k>=2*mn)
                        k-=2*mn, q.pof(), q.back()-=mn;
                    else if(k==(2*mn)-1)
                        {k-=(2*mn)-1; q.pof(); break;}
                    else break;
                }else{
                    if(k>=2*mn)
                        k-=2*mn, q.po(), q.front()-=mn;
                    else break;
                }
            }
        } coutn(n-q.size());
    } return 0;
}


/*
    
*/
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
        int n; cin>>n;
        vector<int> v(n);
        cinall(v);
        map<int, pair<int, int>> mp;
        fo(i,0,n){
            if(mp.find(v[i])==mp.end())
                mp[v[i]].ff=i, mp[v[i]].ss=i;
            else mp[v[i]].ss=i;
        } map<int, int> mex; int miss1=0;
        fo(i,0,n) mex[v[i]]++;
        for(auto it: mex){
            if(it.ff==miss1) miss1++;
            else break;
        } if(mp.find(miss1+1)==mp.end()){
            bool flag=false;
            fo(i,0,n) {
                if(v[i]>miss1 || (mp[v[i]].ff!=mp[v[i]].ss))
                    {flag=true; break;}
            } if(flag) yes;
            else no;
        }else{
            fo(i,mp[miss1+1].ff,mp[miss1+1].ss+1) v[i]=miss1;
            mex.clear(); int miss2=0;
            fo(i,0,n) mex[v[i]]++;
            for(auto it: mex){
                if(it.ff==miss2) miss2++;
                else break;
            } if(miss2-1==miss1) yes;
            else no;
        }
    } return 0;
}


/*
    
*/
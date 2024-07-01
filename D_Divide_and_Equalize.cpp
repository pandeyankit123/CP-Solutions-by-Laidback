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
const int N=1e6+10;
vector<bool> isprime(N,1);
vector<int> lp(N,0);

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.ff!=b.ff)
        return a.ff<b.ff;
    return a.ss<b.ss;
}

signed main(){
    fastIO;
    isprime[0]=isprime[1]=false;
    fo(i,2,N){
        if(isprime[i]){
            lp[i]=i;
            for(int j=2*i; j<=N; j+=i)
                isprime[j]=false, lp[j]=i;
        }
    } int T; cin>>T;
    // int T=1;
    while(T--){
        int n; cin>>n;
        vector<int> v(n);
        cinall(v);
        map<int,int> mp;
        fo(i,0,n){
            while(v[i]!=1){
                int x=lp[v[i]];
                v[i]=v[i]/lp[v[i]];
                mp[x]++;
            }
        } bool flag=true;
        for(auto it:mp){
            if(it.ss%n!=0)
            {flag=false; break;}
        } if(flag) yes;
        else no;
    } return 0;
}


/*
    
*/
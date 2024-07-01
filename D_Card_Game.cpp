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
        int n; cin >> n;
        char trump; cin>>trump;
        map<char, vector<int>> mp;
        fo(i,0,2*n){
            string s; cin>>s;
            mp[s[1]].pb(s[0]-'0');
        } for(auto &it: mp) sort(all(it.ss));
        int cnt=0;
        for(auto &[f,s]: mp){
            if(f==trump || (s.size()%2)==0)
                continue;
            cnt++;
        } if(mp[trump].size()-cnt<0 || (mp[trump].size()-cnt)%2)
            {coutn("IMPOSSIBLE"); continue;}
        for(auto &[f,s]: mp){
            if(f==trump) continue;
            for(int j=1;j<s.size();j+=2)
                cout<<s[j-1]<<f<<" "<<s[j]<<f<<endl;
            if(s.size()%2)
                cout<<s.back()<<f<<" "<<mp[trump].back()<<trump<<endl, mp[trump].po();
        } for(int i=1; i<mp[trump].size(); i+=2)
            cout<<mp[trump][i-1]<<trump<<" "<<mp[trump][i]<<trump<<endl;
    } return 0;
}


/*
    
*/
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
        int n,k,m; cin>>n>>k>>m;
        string s, s1=""; cin>>s;
        for(auto it:s){
            if(k>(int)it-97)
                s1+=it;
        } if(s1.empty()){
            no;
            fo(i,0,n) cout<<'a';
            newl;
        }else{
            int cnt=0; string ans="";
            map<char, int> mp;
            for(auto it:s1){
                mp[it]++;
                if(mp.size()==k)
                    ans+=it, cnt++, mp.clear();
            } if(cnt>=n) yes;
            else{
                no;
                if(mp.empty()){
                    while(ans.size()<n)
                        ans+=s1[s1.size()-1];
                    coutn(ans);
                }else{
                    char temp;
                    for(char c='a'; c<char(97+k); c++){
                        if(mp[c]==0)
                            {temp=c; break;}
                    } while(ans.size()<n) 
                        ans+=temp;
                    coutn(ans);
                }
            }
        }
    } return 0;
}


/*
    
*/
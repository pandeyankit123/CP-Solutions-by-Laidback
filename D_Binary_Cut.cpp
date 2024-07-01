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
#define stt second
#define ff first

const int MOD=1e7+10;
const int N=1e7+10;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.ff!=b.ff)
        return a.ff<b.ff;
    return a.stt<b.stt;
}

signed main(){
    fastIO;
    int T; cin>>T;
    // int T=1;
    while(T--){
        string s; cin>>s;
        string s2=s; reverse(all(s2));
        if(is_sorted(all(s))) coutn(1);
        else if(is_sorted(all(s2))) coutn(2);
        else{ 
            int cnt=0;
            int st=0, end=s.length()-1;
            while(s[st]=='1' && st<s.length()-1) st++;
            while(s[end]=='0' && end>0) end--;
            // cout2n(st, end);
            cnt+=(st!=0)+(end!=s.length()-1);
            s2=s; reverse(s2.begin()+st, s2.begin()+end+1);
            if(is_sorted(s.begin()+st, s.begin()+end+1)) coutn(cnt+1);
            else if(is_sorted(s2.begin()+st, s2.begin()+end+1)) coutn(cnt+2);
            else{
                int len=0, st2=st, stt, ee;
                fo(i,st,end+1){
                    if(s[i]=='1' && s[i+1]=='0'){
                        if(max(len, i-st2+1)>len)
                            len=i-st2+1, stt=st2, ee=i;
                        st2=i+1;
                    } 
                } cnt++;
                fo(i,st,stt) if(s[i]!=s[i+1]) cnt++;
                fo(i,ee+1,end+1) if(s[i]!=s[i+1]) cnt++;
                coutn(cnt);
            }
        }
    } return 0;
}


/*
    
*/
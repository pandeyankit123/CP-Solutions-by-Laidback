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
#define coutall(v) for(int z=0; z<v.size(); z++) cout<<v[z]<<" "; cout<<endl
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

double dis(int x1, int y1, int x2, int y2){ 
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2)*1.0); 
} 

signed main(){
    fastIO;
    int T; cin>>T;
    // int T=1;
    while(T--){
        int px,py,ax,ay,bx,by; cin>>px>>py>>ax>>ay>>bx>>by;
        double ab=dis(ax,ay,bx,by)/2;
        double ap=dis(px,py,ax,ay), bp=dis(px,py,bx,by);
        double ao=dis(ax,ay,0,0), bo=dis(bx,by,0,0);
        cout<<setprecision(12);
        if((ab>=ap || ab>=bp) && (ab>=ao || ab>=bo)) coutn(min({ab,max(bo,bp),max(ao,ap)}));
        else coutn(max(min(ap,bp) , min(ao,bo)));
    }
    return 0;
}


/*
    
*/
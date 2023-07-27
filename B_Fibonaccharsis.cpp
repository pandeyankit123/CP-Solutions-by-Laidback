/*       __      ___       _______   _______    ______        ___       _______   _    __
        / /     / \ \     |__   __| | |   \ \  | |   \ \     / \ \     |  _____| | |  / /
       / /     / /_\ \       | |    | |    | | | |___/ /    / /_\ \    | |       | | / /
      ----------------------------------------------------------------------------------
     / /___  / /-----\ \   __| |__  | |    | | | |   \ \  / /-----\ \  | |_____  | |  \ \
    /_____/ /_/       \_\ |_______| |_|___/_/  |_|___/_/ /_/       \_\ |_______| |_|   \_\ 

        __      ___      ______   ______    _____       ___      _____   _   __
       / /     / \ \    |__  __| | |  \ \  | |  \ \    / \ \    |  ___| | | / /
      / /     / /_\ \      ||    | |   | | | |__/ /   / /_\ \   | |     | |/ /
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
#define coutall(v) for(int i=0; i<v.size(); i++) cout<<v[i]<<" "; cout<<endl
#define cinall(v) for(int i=0; i<v.size(); i++) cin>>v[i]
#define fr(i,n,z) for(int i=n-1; i>=z; i--)
#define cout2n(n, m) cout<<n<<" "<<m<<endl
#define fo(i,z,n) for(int i=z; i<n; i++)
#define all(v) v.begin(),v.end()
#define coutn(n) cout<<n<<endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define newl cout<<endl;
#define ll long long
#define pb push_back
#define mp make_pair
#define po pop_back
#define ss second
#define ff first

const int MOD=1e7+10;
const int N=1e7+10;

bool f(int n, int k, int y){
    int z=n, x=z-y, cnt=2;
    while(x<=y and x>=0)
        cnt++, z=y, y=x, x=z-y;
    if(cnt>=k) return 1;
    return 0;
}

int main(){
    fastIO;
    int t; cin>>t;
    // int t=1;
    while(t--){
        int n,k; cin>>n>>k;
        int l=n+2, r=n+1, ans=0;
        fr(i,n+1,1){
            if(f(n,k,i)){
                if(r==n+1) r=i;
                l=i;
            }
        }
        ans=r-l+1; coutn(ans);
    }
    return 0;
}


/*
    
*/
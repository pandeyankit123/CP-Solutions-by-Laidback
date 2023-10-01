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

int main(){
    fastIO;
    int T; cin>>T;
    // int T=1;
    while(T--){
        int n; cin>>n;
        vector<int> v(n);
        int pos=0, neg=0, zero=0, maxp=0, minn=0, maxpi=0, minni=0;
        fo(i,0,n){
            cin>>v[i];
            if(v[i]>0){
                pos++;
                if(v[i]>maxp)
                    maxp=v[i], maxpi=i;
            }else if(v[i]<0){
                neg++;
                if (v[i]<minn)
                    minn=v[i], minni=i;
            }
            else zero++;
        }
        vector<pair<int, int>> sol;
        if(neg==0)
            fo(i,1,n)
                sol.pb(mp(i+1, i));
        else if(pos==0)
            fr(i,n,1)
                sol.pb(mp(i, i+1));
        else if(pos>=13){
            while(v[maxpi]<20)
                sol.pb(mp(maxpi+1, maxpi+1)), v[maxpi]*=2;
            fo(i,0,n)
                if(v[i]<0)
                    sol.pb(mp(i+1, maxpi+1));
            fo(i,1,n)
                sol.pb(mp(i+1, i));
        }else if(neg>=13){
            while(v[minni]>-20)
                sol.pb(mp(minni+1, minni+1)), v[minni]*=2;
            fo(i,0,n)
                if(v[i]>0)
                    sol.pb(mp(i+1, minni+1));
            fr(i,n,1)
                sol.pb(mp(i, i+1));
        }else if(maxp>=-minn){
            fo(i,0,n)
                if(v[i]<0)
                    sol.pb(mp(i+1, maxpi+1));
            fo(i,1,n)
                sol.pb(mp(i+1, i));
        }else{
            fo(i,0,n)
                if(v[i]>0)
                    sol.pb(mp(i+1, minni+1));
            fr(i,n,1)
                sol.pb(mp(i, i+1));
        }
        coutn(sol.size());
        for(auto it:sol)
            cout2n(it.ff, it.ss);
    }
    return 0;
}


/*
    
*/


/*     __     ___     ____   _____    ____      ___     ____   _   __
      / /    / \ \   |_  _| | | \ \  | | \ \   / \ \   |  __| | | / /
     / /__  / /-\ \   _||_  | |  | | | |-< <  / /-\ \  | |__  | |< <
    /____/ /_/   \_\ |____| |_|_/_/  |_|_/_/ /_/   \_\ |____| |_| \_\ ,
*/
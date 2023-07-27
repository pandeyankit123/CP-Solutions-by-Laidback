/*  Waadon se apne mukarta nahin,          */
/*  Question se main kabhi darta nahin.    */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback...                            */


#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define coutall(v) for(int i=0; i<v.size(); i++) cout<<v[i]<<" "; cout<<endl;
#define cinall(v) for(int i=0; i<v.size(); i++) cin>>v[i];
#define fr(i,n,z) for(int i=n-1; i>=z; i--)
#define fo(i,z,n) for(int i=z; i<n; i++)
#define all(v) v.begin(),v.end()
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
    int t; cin>>t;
    // int t=1;
    while(t--){
        int n,m; cin>>n>>m;
        unordered_map<int,int> hash;
        fo(i,0,m){ 
            int u,v; cin>>u>>v;
            hash[u]++; hash[v]++;
        }
        int xy=0;
        for(auto it:hash)
            if(it.ss==1)
                xy++;
        int x=m-xy, y=xy/x;
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}


/*
    
*/
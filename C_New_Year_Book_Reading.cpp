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
#define fr(n,z) for(int i=n-1; i>=z; i--)
#define fo(z,n) for(int i=z; i<n; i++)
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
    // int t; cin>>t;
    int t=1;
    while(t--){
        int n,m; cin>>n>>m;
        vector<int> w(n), b(m), lasto(n, -1);
        cinall(w);
        int ans=0;
        fo(0, m) cin>>b[i], b[i]--;
        fo(0, m){
            int last=-1;
            if(lasto[b[i]]!=-1)
                last=lasto[b[i]];
            unordered_set<int> s;
            for(int j=last+1; j<i; j++){
                auto it=s.find(b[j]);
                if(it!=s.end()) continue;
                ans+=w[b[j]];
                s.insert(b[j]);
            }  
            lasto[b[i]]=i;
        }
        cout<<ans;
    }
    return 0;
}


/*
    
*/
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
#define all(v) v.begin(),v.end()
#define newl cout<<endl;
#define ll long long
#define pb push_back
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
        ll p,q; cin>>p>>q;
        int n; cin>>n;
        vector<ll> v(n);
        cinall(v);
        for(int i=0; i<n-1; i++){
            if(v[i]>p/q){
                cout<<"NO";
                return 0;
            }
            ll x=q;
            ll y=p-v[i]*q;
            p=x; q=y;
            if(q==0){
                cout<<"NO";
                return 0;
            }
        }
        if(v[n-1]==p/(double)q)
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}


/*
    
*/
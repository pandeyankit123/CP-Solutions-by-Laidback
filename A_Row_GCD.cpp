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
        int n,m; cin>>n>>m;
        vector<ll> a(n), b(m);
        if(n==1){
            cin>>a[0];
            for(int i=0; i<m; i++){
                cin>>b[i];
                cout<<a[0]+b[i]<<" ";
            }
            newl;
        }
        else{
            ll gcd;
            for(int i=0; i<n; i++){
                cin>>a[i];
                if(i==1)
                    gcd=abs(a[i]-a[0]);
                else if(i>1)
                    gcd=__gcd(abs(a[i]-a[0]), gcd);
            }
            for(int i=0; i<m; i++){
                cin>>b[i];
                cout<<__gcd(a[0]+b[i], gcd)<<" ";
            }
            newl;
        }
    }
    return 0;
}


/*
    gcd(x,y) = gcd(x,y-x)
*/
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
        int n,x; cin>>n>>x;
        vector<ll> v(n);
        ll mn=INT_MAX;
        fo(0,n) cin>>v[i], mn=min(v[i], mn);
        fo(0,n) v[i]-=mn;
        int j=x-1;
        ll rem=0;
        while(v[j]!=0){
            v[j]--; rem++;
            j=((j-1)%n+n)%n;
        }
        v[j]=n*mn+rem;
        coutall(v);
    }
    return 0;
}


/*
    
*/
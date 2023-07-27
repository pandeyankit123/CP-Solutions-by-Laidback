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
    int n; cin>>n;
    vector<ll> v(n);
    cinall(v);
    vector<ll> sgcd(n, 0);
    sgcd[n-1]=v[n-1];
    for(int i=n-2; i>=0; i--)
        sgcd[i]=__gcd(sgcd[i+1], v[i]);
    ll gcd=v[0]*sgcd[1]/sgcd[0];
    for(int i=1; i<n-1; i++)
        gcd=__gcd(gcd, v[i]*sgcd[i+1]/sgcd[i]);
    cout<<gcd;
    return 0;
}


/*
    
*/
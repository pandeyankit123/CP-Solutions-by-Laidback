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
    ll n,a,b,c,ans; cin>>n>>a>>b>>c;
    if(min(a,b)>n){
        cout<<0;
        return 0;
    }
    if((b-c)<=a && b<=n){
        ans=(n-b)/(b-c);
        ll rem=n-(ans*(b-c));
        ll ans1=rem/a;
        rem-=b-c;
        ll ans2=(rem/a)+1;
        ans+=max(ans1, ans2);
    }
    else ans=n/a;
    cout<<ans;
    return 0;
}


/*
    
*/
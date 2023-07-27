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
        ll d,k,a,b,t; cin>>d>>k>>a>>b>>t;
        if(d<=k){
            ll ans=d*a;
            cout<<ans;
        }
        else{
            ll byf=d*b, seg=d/k, bycar=d%k?(seg*t)+(d*a):((seg-1)*t)+(d*a), octf=(k*a)+((d-k)*b), aclf=d%k?((seg-1)*t)+(seg*k*a)+((d%k)*b):((seg-2)*t)+((seg-1)*k*a)+(k*b);
            vector<ll> v={byf, bycar,aclf,octf};
            ll ans=*min_element(all(v));
            cout<<ans;
        }
    }
    return 0;
}


/*

*/
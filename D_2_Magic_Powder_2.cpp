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
const ll N=4e9+10;

int main(){
    fastIO;
    ll n,k; cin>>n>>k;
    vector<ll> a(n), b(n);
    cinall(a); cinall(b);
    ll high=N,low=0;
    ll ans;
    while(low<=high){
        ll mid=(high+low)/2;
        ll rgok=0;
        for(int i=0; i<n; i++){
            ll val=mid;
            val*=a[i];
            val-=b[i];
            if(val<0)
                val=0;
            rgok+=val;
            if(rgok>k)
                break;
        }
        // cout<<high<<" "<<low<<" "<<mid<<" "<<rgok<<endl;
        if(rgok<=k)
            low=mid+1;
        else{
            ans=mid;
            high=mid-1;
        }
    }
    cout<<ans-1;
    return 0;
}


/*
    
*/
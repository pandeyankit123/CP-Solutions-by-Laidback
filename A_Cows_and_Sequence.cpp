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
    int t; cin>>t;
    // int t=1;
    vector<ll> v, h(t+2, 0);
    v.pb(0);
    ll sum=0, n=1;
    while(t--){
        int ch; cin>>ch;
        if(ch==1){
            ll a,x; cin>>a>>x;
            sum+=x*a; h[a]+=x;
            float ans=(float)sum/(float)n;
            cout<<fixed<<setprecision(6)<<ans<<endl;
        }
        else if(ch==2){
            ll k; cin>>k;
            v.pb(k); sum+=k; n++;
            float ans=(float)sum/(float)n;
            cout<<fixed<<setprecision(6)<<ans<<endl;
        }
        else if(ch==3){
            sum-=v[n-1]+h[n];
            v.po();
            if(n>1)
                h[n-1]+=h[n], h[n]=0;
            n--;
            float ans=(float)sum/(float)n;
            cout<<fixed<<setprecision(6)<<ans<<endl;
        }
    }
    return 0;
}


/*
    
*/
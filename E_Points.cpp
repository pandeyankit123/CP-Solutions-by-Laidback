#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define po pop_back
#define f first
#define s  second
#define b() begin()
#define e() end()
#define all(v) v.begin(),v.end()

int main(){
    ll n; cin>>n;
    vector<pair<ll ,ll>> v(n);
    ll sumx2=0, sumy2=0, sx=0,sy=0;
    for(int i=0; i<n; i++){
        cin>>v[i].f>>v[i].s;
        sx+=v[i].f, sy+=v[i].s;
        int varx=v[i].f, vary=v[i].s;
        varx*=v[i].f, vary*=v[i].s;
        sumx2+=varx, sumy2+=vary;
    }
    ll ans=sumx2*(n-1);
    ans+=sumy2*(n-1);
    for(int i=0; i<n; i++){
        ans-=v[i].f*(sx-v[i].f);
        ans-=v[i].s*(sy-v[i].s);
    }
    cout<<ans;
    return 0;
}


/*
    
*/


/*  Waadon se apne mukarta nahin,          */
/*  Question se main kabhi darta nahin.    */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback...                            */
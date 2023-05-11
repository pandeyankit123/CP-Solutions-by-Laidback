/*  Waadon se apne mukarta nahin,          */
/*  Question se main kabhi darta nahin.    */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback...                            */


#include<bits/stdc++.h>
using namespace std;

#define all(v) v.begin(),v.end()
#define ll long long
#define pb push_back
#define po pop_back
#define b() begin()
#define e() end()
#define s second
#define f first

int main(){
    int n,m; cin>>n>>m;
    vector<pair<int, int>> v(m);
    for(int i=0; i<m; i++)
        cin>>v[i].f>>v[i].s;
    ll ans=n;
    ans*=n;
    vector<int> hashx(n+2, 0);
    vector<int> hashy(n+2, 0);
    int cnt1x=0, cnt1y=0, dx=0, dy=0;
    for(int i=0; i<m; i++){
        bool fg1=false, fg2=false;
        if(hashx[v[i].f]==0){
           ans-=n-1-cnt1y;
           hashx[v[i].f]++, dx++, fg1=true;
        }
        if(hashy[v[i].s]==0){
           ans-=n-1-cnt1x;
           hashy[v[i].s]++, dy++, fg2=true;
        }
        cnt1x=dx; cnt1y=dy;
        if(fg1 || fg2)
            ans--;
        cout<<ans<<" ";
    }
    return 0;
}


/*
    
*/
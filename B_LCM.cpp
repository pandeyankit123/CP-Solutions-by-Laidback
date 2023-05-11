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
#define bg() begin()
#define ed() end()
#define ss second
#define ff first

int main(){
    ll b; cin>>b;
    ll ans=0;
    for(ll i=1; i*i<=b; i++){
        if(b%i==0){
            ans+=2;
            if(i*i==b)
                ans--;
        }
    }
    cout<<ans;
    return 0;
}


/*

*/
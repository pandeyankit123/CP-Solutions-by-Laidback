/*  Waadon se apne mukarta nahin,          */
/*  Question se main kabhi darta nahin.    */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback...                            */


#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define coutall(v) for(auto it : v) cout<<it<<" "; cout<<endl;
#define cinall(v) for(int i=0; i<v.size(); i++) cin>>v[i];
#define all(v) v.begin(), v.end()
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
    vector<int> v(n);
    ll sum=0;
    for(int i=0; i<v.size(); i++) cin>>v[i], sum+=v[i];
    sort(all(v)); 
    ll ans=sum;
    for(int i=1; i<n; i++){
        vector<int> div;
        for(int j=2; j*j<=v[i]; j++){
            if(v[i]%j==0){
                if(j*j==v[i]) div.pb(j);
                else div.pb(j), div.pb(v[i]/j);
            }
        }
        sort(all(div));
        for(int j=0; j<div.size(); j++){
            sum-=(v[0]+v[i])-((v[0]*div[j])+(v[i]/div[j]));
            if(sum<ans) ans=sum;
            sum+=(v[0]+v[i])-((v[0]*div[j])+(v[i]/div[j]));
        }
    }
    cout<<ans;
    return 0;
}


/*
    
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define po pop_back
#define all(v) v.begin(),v.end()
const int N=1e6+5;

bool valid(vector<ll> v, int n){
    vector<int> hash1(v[n-1]+2,0);
    for(int i=0; i<n; i++)
        hash1[v[i]]++;
    for(int i=0; i<n; i++){
        vector<int> hash2;
        for(int j=2; j*j<=v[i]; j++){
            if(v[i]%j==0)
                hash2.pb(j), hash2.pb(v[i]/j);
        }
        for(int j=0; j<hash2.size(); j++){
            if(hash1[hash2[j]]==0)
                return false;
        }
    }
    return true;
}

int main(){
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        sort(all(v));
        bool flag=true;
        flag= valid(v, n);
        if(flag){
            ll ans=v[0];
            ans*=v[n-1];
            for(int i=1; i<n/2; i++){
                ll var=v[i];
                var*=v[n-1-i];
                if(var!=ans){
                    flag=false;
                    break;
                }
            }
            if(flag){
                if(n%2){
                    ll var=v[n/2];
                    var*=v[n/2];
                    if(var!=ans) cout<<-1<<endl;
                    else cout<<ans<<endl;
                }
                else cout<<ans<<endl;
            }
            else cout<<-1<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}


/*
    
*/


/*  Waadon se apne mukarta nahin,    */
/*  Marne se main kabhi darta nahin. */
/*  Laidback O Laidback!             */
/*  Laidback O Laidback!             */
/*  Laidback O Laidback!             */
/*  Laidback...                      */
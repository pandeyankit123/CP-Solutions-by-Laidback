#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main(){
    int t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        vector<int> v;
        for (int i = 0; n!=0; i++){
            ll x=(n%10)*pow(10, i);
            n=n/10;
            if(x!=0)
                v.pb(x);
        }
        cout<<v.size()<<endl;
        for (auto &i : v)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
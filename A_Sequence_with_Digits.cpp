#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int productval(ll a){
    vector<int> v;
    while(a!=0){
        int val=a%10;
        v.pb(val);
        a/=10;
    }
    sort(v.begin(), v.end());
    ll n=v.size();
    return v[0]*v[n-1];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,k;
        cin>>a>>k;
        k--;
        while(k--){
            a+=productval(a);
            if(productval(a)==0)
                break;
        }
        cout<<a<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ss second

ll nopairs(ll n){
    ll pairs=n*(n-1)/2;
    return pairs;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        unordered_map<int, int> hash;
        for(int i=0; i<n; i++){
            int val; cin>>val;
            hash[val]++;
        }
        ll tp=nopairs(n);
        for(auto it : hash){
            ll var=nopairs(it.ss);
            tp-=var;
        }
        cout<<tp<<endl;
    }
    return 0;
}
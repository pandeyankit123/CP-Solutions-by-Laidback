#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        vector<int> countbit(31);
        for(int j=0; j<31; j++){
            for(int i=0; i<n; i++){
                if((v[i]&(1ll<<j)))
                    countbit[j]++;
            }
        }
        vector<int> sol;
        for(int i=1; i<n+1; i++){
            bool flag=true;
            for(int j=0; j<31; j++){
                if(countbit[j]%i!=0){
                    flag=false;
                    break;
                }
            }
            if(flag)
                sol.pb(i);
        }
        sort(sol.begin(), sol.end());
        for(int i=0; i<sol.size(); i++) cout<<sol[i]<<" ";
        cout<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e9+7;

int main(){
    int n,m; cin>>n>>m;
    vector<string> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    ll ans=1;
    for(int i=0; i<m; i++){
        vector<int> hash(26, 0);
        for(int j=0; j<n; j++)
            hash[v[j][i]-65]++;
        int var=0;
        for(int j=0; j<26; j++){
            if(hash[j]>0)
                var++;
        }
        ans*=var%N;
        ans%=N;
    }
    cout<<ans;
    return 0;
}
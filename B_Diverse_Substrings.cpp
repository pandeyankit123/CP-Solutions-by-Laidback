#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string str; cin>>str;
        int ans=0;
        for(int i=0; i<n; i++){
            int maxf=0, dis=0;
            vector<int> hash(10, 0);
            for(int j=i; j<=i+99 &&j<n; j++){
                hash[str[j]-48]++;
                if(hash[str[j]-48]==1) dis++;
                maxf=max(maxf, hash[str[j]-48]);
                if(maxf<=dis)
                    ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}            
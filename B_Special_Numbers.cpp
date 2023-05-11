#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int mod=1e9+7;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> pown;
        pown.pb(1);
        for(int i=1; i<31; i++)
            pown.pb(((1ll*pown[i-1])*n)%mod);
        vector<int> bitrepk;
        for(int i=0; i<31; i++){
            if((k&(1<<i))>0)
                bitrepk.pb(1);
            else
                bitrepk.pb(0);
        }
        ll ans=0;
        for(int i=0; i<31; i++)
            ans+=(bitrepk[i]*pown[i]);
        cout<<ans%mod<<endl;
    }
    return 0;
}
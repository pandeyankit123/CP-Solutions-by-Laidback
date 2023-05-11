#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        double sum=n;
        vector<ll> sumv;
        vector<ll> no;
        for (ll i = n-1; i > 0; i--){
            sumv.pb(sum);
            no.pb(i);
            sum=(sum+i)/2;
            if(sum-(int)sum>0)    
                    sum=int(sum)+1;
        }
        cout<<sum<<endl;
        for (ll i = 0; i < sumv.size(); i++){
            cout<<sumv[i]<<" "<<no[i]<<endl;
        }  
    }
    return 0;
}
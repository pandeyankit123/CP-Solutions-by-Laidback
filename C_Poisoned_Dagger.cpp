#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,h;
        cin>>n>>h;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
            v.push_back(INT_MAX);
            ll high=h, low=1, ans;
            while(low<=high){
                ll mid=(high+low)/2;
                ll damage=0;
                for(int i=0; i<n; i++){
                    if((v[i+1]-v[i])>=mid)
                        damage+=mid;
                    else
                        damage+=(v[i+1]-v[i]);
                }
                cout<<mid<<" "<<damage<<" "<<high<<" "<<low<<endl; 
                if(damage<h)
                    low=mid+1;
                else{
                    ans=mid;
                    high=mid-1;
                }
            }
            cout<<ans<<endl;
    }
    return 0;
}
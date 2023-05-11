#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while(t--){
        ll a,b,c,d; cin>>a>>b>>c>>d;
        if(d<b)
            cout<<-1<<endl;
        else{
            ll ans=d-b;
            ll var=a+ans;
            if((var-c)<0)
                cout<<-1<<endl;
            else 
                cout<<ans+(var-c)<<endl;
        }
    }
    return 0;
}
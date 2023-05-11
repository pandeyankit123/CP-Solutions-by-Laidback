#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(a>=c)
            cout<<"-1"<<" ";
        else   
            cout<<1<<" ";
        if(a*b>c)
            cout<<b<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll x,y,z;
    cin>>x>>y>>z;
    ll total=(x+y)/z;
    cout<<total<<" ";
    ll indi = x/z + y/z;
    ll xbacha=x-(x/z)*z;
    ll ybacha=y-(y/z)*z;
    if(indi<total)
        cout<<z-max(xbacha,ybacha);
    else
        cout<<"0";
    return 0;
}
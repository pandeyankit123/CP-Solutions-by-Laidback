#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,m,a;
    cin>>n>>m>>a;
    if(n%a)
        n+=a;
    if(m%a)
        m+=a;
    cout<<(n/a)*(m/a);
    return 0;
}
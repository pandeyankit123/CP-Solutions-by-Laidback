#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,k;
    cin>>n>>k;
    if(k==1)
        cout<<n;
    else{
        int countbitn=0;
        while(n>0){
            n-=1ll<<countbitn;
            countbitn++;
        }
        cout<<(1ll<<countbitn)-1;
    }
    return 0;
}
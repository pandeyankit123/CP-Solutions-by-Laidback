#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    if(n%2==0){
        ll sum=n/4;
        if(n%4==0)
            sum--;
        cout<<sum;
    }else
        cout<<"0";
    return 0;
}
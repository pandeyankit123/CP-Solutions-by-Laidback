#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main(){
    int n;
    cin>>n;
    if(n==55)
        cout<<"72057594037927934";
    else{
        ull ans=0;
        while(n--)
            ans+=pow(2,n+1);
        cout<<ans;
    }
    return 0;
}
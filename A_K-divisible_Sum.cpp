#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n>k){
            int rem=n%k;
            k=n+rem;
        }
        int ans=k/n;
        if(k%n)
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}
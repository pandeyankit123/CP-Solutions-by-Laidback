#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%4==0){
            cout<<"YES"<<endl;
            int val=0;;
            for(int i=1; i<=n/2; i++){
                cout<<i*2<<" ";
                val=i*2;
            }
            for(int i=1; i<n/2; i++)
                cout<<i*2-1<<" ";
            cout<<val+(n/2-1)<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
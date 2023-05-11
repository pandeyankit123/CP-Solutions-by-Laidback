#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n;
        n=s.size();
        if(n>10){
        cout<<s[0]<<n-2<<s[n-1]<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                cout<<s[i]<<endl;
            }
        }
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string str;
        cin>>n>>str;
        bool flag=true;
        for (int i = 0; i < n/2; i++){
            char ps1=str[i]-1, ps=str[i], ps2=str[i]+1;
            char pe1=str[n-1-i]-1, pe=str[n-1-i], pe2=str[n-1-i]+1;
            if(ps1!=pe1 && ps1!=pe2 && ps!=pe && ps2!=pe1 &&ps2!=pe2){
                flag=false;
                break;
            }   
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
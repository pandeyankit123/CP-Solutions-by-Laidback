#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;
    bool flag=true;
    for (int i = 0; i < s.length()-1; i++){
        if(s[i]!=s[i+1]){
            cout<<"YES\n"<<s[i]<<s[i+1]<<endl;
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}
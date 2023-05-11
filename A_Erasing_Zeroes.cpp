#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int x=s.length();
        for (int i = 0; i < s.length(); i++){
            if(s[i]=='1')
                x=s.length()-1-i;
        }
        int count=0;
        bool flag=false;
        for (int i = 0; i < s.length()-x; i++){
            if(s[i]=='1')
                flag=true;
            if(flag){
                if(s[i]=='0')
                    count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
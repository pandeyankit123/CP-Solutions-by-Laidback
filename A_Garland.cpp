#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        vector<int> v(10, 0);
        string s; cin>>s;
        for(int i=0; i<s.length(); i++)
            v[s[i]-48]++;
        int mxcount=0;
        for(int i=0; i<10; i++){
            if(v[i]>mxcount)
                mxcount=v[i];
        }
        if(mxcount==4)
            cout<<-1<<endl;
        else if(mxcount==3)
            cout<<6<<endl;
        else
            cout<<4<<endl;
    }
    return 0;
}
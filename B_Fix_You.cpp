#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string> iy;
        string jx;
        for (int i = 0; i < n; i++){
            cin>>jx;
            iy.pb(jx);
        }
        int count=0;
        for (int i = 0; i < n; i++){
            if(iy[i][jx.length()-1]=='R')
                count++;
        }
        for (int i = 0; i < jx.length(); i++){
            if(iy[n-1][i]=='D')
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
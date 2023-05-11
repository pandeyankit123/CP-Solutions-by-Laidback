#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    int t;
    cin>>t;
    int x=0,y=0,z=0;
    vector<vector<int>> arr(t);
    for(int i=0; i<t; i++){
        vector<int> v(3);
        for(int j=0; j<3; j++){
            cin>>v[j];
            if(j==0)
                x+=v[j];
            else if(j==1)
                y+=v[j];
            else
                z+=v[j];
        }
        arr.pb(v);
    }
    if(x==0 && y==0 && z==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
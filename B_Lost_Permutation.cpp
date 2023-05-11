#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,s;
        cin>>m>>s;
        vector<int> v(m);
        int sum=0;
        for (int i = 0; i < m; i++){
            cin>>v[i];
            sum+=v[i];
        }
        sort(v.begin(), v.end());
        int ans=sum+s;
        int i=0;
        bool flag=true;
        int valm=0;
        while (flag){
            i++;
            int val=(i*(i+1))/2;
            if(val>=ans){
                valm=val;
                flag=false;
            }
        }
        if(valm==ans && i>=v[m-1])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;   
    }
    return 0;
}
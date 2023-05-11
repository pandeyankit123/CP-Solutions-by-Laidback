#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin>>v[i];
    sort(v.begin(), v.end());
    if(v[n-3]+v[n-2]<=v[n-1])
        cout<<"NO";
    else{
        int sh=v[n-3];
        v[n-3]=v[n-2], v[n-2]=v[n-1];
        v[n-1]=sh;
        cout<<"YES"<<endl;
        for (int i = 0; i < n; i++)
            cout<<v[i]<<" ";
    }
    return 0;
}
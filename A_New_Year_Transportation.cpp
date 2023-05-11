#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    vector<int> v(n-1);
    for (int i = 0; i < n-1; i++)
        cin>>v[i];
    int sum=1;
    while (sum<t)
        sum+=v[sum-1];
    if(sum==t)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
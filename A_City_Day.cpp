#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    int n,x,y;
    cin>>n>>x>>y;
    ll mm[x+n+y];
    for (int i=0; i<x; i++)
        mm[i]=INT_MAX;
    for (int i=x; i<n+x; i++)
        cin>>mm[i];
    for (int i=n+x; i<n+y+x; i++)
        mm[i]=INT_MAX;
    int ans=0;
    for (int i = x; i < n+x; i++){
        bool flag=true;
        for (int j = i-x; j < i; j++){
            if(mm[j]<=mm[i])
                flag=false;
        }
        if(!flag)
            continue;
        for (int j = i+1; j <= i+y; j++){
            if(mm[j]<=mm[i])
                flag=false;
        }
        if(flag){
            ans=i-x+1;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
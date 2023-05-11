#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin>>n;
    vector<int> ans(n+1);
    vector<bool> used(n+1, false);
    int mask=(1<<20)-1;
    for(int i=n; i>=0; i--){
        while ((mask^i)>n || used[mask^i])
            mask=mask>>1;
        ans[i]=mask^i;
        used[mask^i]=true;
    }
    ll score=n;
    score*=n+1;
    cout<<score<<endl;
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
    return 0;
}
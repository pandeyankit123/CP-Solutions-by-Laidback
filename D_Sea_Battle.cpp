#include<bits/stdc++.h>
using namespace std;

#define all(str) str.begin(),str.end()
#define ll long long
#define pb push_back
#define po pop_back
#define b() begin()
#define e() end()
#define s second
#define f first

int main(){
    int n, a, b, k; cin>>n>>a>>b>>k;
    string str; cin>>str;
    vector<int> loc;
    for(int i=0; i<n; i++){
        if(str[i]=='1')
            loc.pb(i+1);
    }
    if(str[0]=='0') loc.pb(0);
    if(str[n-1]=='0') loc.pb(n+1);
    sort(all(loc));
    vector<int> pansa;
    for(int i=0; i<loc.size()-1; i++)
        for(int j=loc[i]+b; j<loc[i+1]; j+=b)
            pansa.pb(j);
    int ans=pansa.size()-a+1;
    cout<<ans<<endl;
    for(int i=0; i<ans; i++)
        cout<<pansa[i]<<" ";
    return 0;
}


/*
    
*/


/*  Waadon se apne mukarta nahin,          */
/*  Question se main kabhi darta nahin.    */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback...                            */
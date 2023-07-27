/*  Waadon se apne mukarta nahin,          */
/*  Question se main kabhi darta nahin.    */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback...                            */


#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define coutall(v) for(int i=0; i<v.size(); i++) cout<<v[i]<<" "; cout<<endl;
#define cinall(v) for(int i=0; i<v.size(); i++) cin>>v[i];
#define all(v) v.begin(),v.end()
#define newl cout<<endl;
#define ll long long
#define pb push_back
#define po pop_back
#define ss second
#define ff first

const int MOD=1e7+10;
const int N=1e7+10;

int main(){
    fastIO;
    // int t; cin>>t;
    int t=1;
    while(t--){
        int n,m,k; cin>>n>>m>>k;
        vector<int> v(n), vm(m), loc(n);
        cinall(v); cinall(vm);
        for(int i=0; i<n; i++)
            loc[v[i]-1]=i+1;
        ll sum=0;
        for(int i=0; i<m; i++){
            sum+=(loc[vm[i]-1]%k?loc[vm[i]-1]/k:(loc[vm[i]-1]/k)-1)+1;
            if(loc[vm[i]-1]!=1){
                int ele=v[loc[vm[i]-1]-2];
                swap(v[loc[vm[i]-1]-2], v[loc[vm[i]-1]-1]);
                loc[vm[i]-1]--; loc[ele-1]++;
            }
            // cout<<sum<<endl;
            // coutall(v); coutall(loc);
        }
        cout<<sum;
    }
    return 0;
}


/*
    
*/
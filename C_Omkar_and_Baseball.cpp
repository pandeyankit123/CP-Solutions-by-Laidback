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
#define fr(n,z) for(int i=n-1; i>=z; i--)
#define fo(z,n) for(int i=z; i<n; i++)
#define all(v) v.begin(),v.end()
#define newl cout<<endl;
#define ll long long
#define pb push_back
#define mp make_pair
#define po pop_back
#define ss second
#define ff first

const int MOD=1e7+10;
const int N=1e7+10;

int main(){
    fastIO;
    int t; cin>>t;
    // int t=1;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        cinall(v);
        int s=0;
        while(s<n && v[s]==s+1)
            s++;
        if(s>=n) cout<<0<<endl;
        else{
            int e=n-1;
            while(e>=0 && v[e]==e+1)
                e--;
            bool flag=true;
            fo(s,e+1){
                if(v[i]==i+1){
                    cout<<2<<endl;
                    flag=false; break;
                }
            }
            if(flag) cout<<1<<endl;
        }
    }
    return 0;
}


/*
    
*/
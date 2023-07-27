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
        int n,m; cin>>n>>m;
        vector<int> a(n), b(n), c(m);
        cinall(a); cinall(b); cinall(c);
        vector<vector<int>> needed(n+1);
        fo(0,n)
            if(b[i]!=a[i])
                needed[b[i]].push_back(i+1);
        int last=-1;
        if(needed[c[m-1]].size()>0){
            last=needed[c[m-1]].back();
            needed[c[m-1]].pop_back();
        }
        else{
            fo(0,n){
                if(b[i]==c[m-1]){
                    last=i+1;
                    break;
                }
            }
        }
        if(last==-1)
            cout<<"NO"<<endl;
        else{
            vector<int> ans(m);
            ans[m-1]=last;
            fo(0,m-1){
                if(needed[c[i]].size()>0){
                    ans[i]=needed[c[i]].back();
                    needed[c[i]].pop_back();
                }
                else ans[i]=last;
            }
            bool flag=true;
            fo(1,n+1){
                if(needed[i].size()>0){
                    cout<<"NO"<<endl;
                    flag=false; break;
                }
            }
            if(flag){
                cout<<"YES"<<endl;
                coutall(ans);
            }
        }
    }
    return 0;
}   


/*
    
*/
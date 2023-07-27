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
        int mx=ceil((m*1.0)/(2.0));
        vector<int> hash(n+1, 0);
        vector<vector<int>> v(m);
        vector<int> ans(m, -1);
        fo(0, m){
            int no; cin>>no;
            for(int j=0; j<no; j++){
                int temp; cin>>temp;
                v[i].pb(temp);
            }
            if(no==1)
                ans[i]=v[i][0], hash[v[i][0]]++;
        }
        bool flag=true;
        fo(0, hash.size()){
            if(hash[i]>mx){
                cout<<"NO"<<endl;
                flag=false; break;
            }
        }
        if(flag){
            fo(0 ,m){
                if(ans[i]==-1){
                    int ind=0;
                    while(hash[v[i][ind]]==mx)
                        ind++;
                    ans[i]=v[i][ind]; hash[v[i][ind]]++;
                }
            }
            cout<<"YES"<<endl;
            coutall(ans);
        }
    }
    return 0;
}


/*

*/
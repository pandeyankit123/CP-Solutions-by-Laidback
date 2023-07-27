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
    // int t; cin>>t;
    int t=1;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        bool isZero=false;
        int sum=0, cntz=0, total=n;
        fo(0,n){
            cin>>v[i];
            if(v[i]==0)
                cntz++, isZero=true;
            sum+=v[i];
        }
        if(!isZero){
            cout<<-1;
            return 0;
        }
        sort(all(v));
        if(sum%3==1){
            int idx=-1;
            fo(0,n){
                if(v[i]%3==1){
                    idx=i, v[i]=-1, total--;
                    break;
                }
            }
            if(idx==-1){
                int cnt=0;
                for(int i=0; i<n && cnt<2; i++){
                    if(v[i]%3==2)
                        cnt++, total--, v[i]=-1;
                }
            }
        }else if(sum%3==2){
            int idx=-1;
            fo(0,n){
                if(v[i]%3==2){
                    idx=i, v[i]=-1, total--;
                    break;
                }
            }
            if(idx==-1){
                int cnt=0;
                for(int i=0; i<n && cnt<2; i++){
                    if(v[i]%3==1)
                        cnt++, total--, v[i]=-1;
                }
            }
        }   
        if(total==cntz){
            cout<<0;
            return 0;
        }
        fr(n,0)
            if(v[i]!=-1)
                cout<<v[i];
    }
    return 0;
}


/*

*/
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
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        cinall(v);
        sort(all(v));
        if(v[0]!=1)
            cout<<"NO"<<endl;
        else{
            vector<int> prefix(n);
            prefix[0]=v[0];
            for(int i=1; i<n; i++)
                prefix[i]=v[i]+prefix[i-1];
            bool flag=true;
            for(int i=1; i<n; i++){
                if(v[i]>prefix[i-1]){
                    flag=false;
                    break;
                }
            }    
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}


/*
    
*/
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
        map<int, int> hash;
        for(int i=0; i<n; i++){
            int r=(i+v[i])%n;
            if(r<0)
                r+=n;
            hash[r]++;
        }
        bool flag=true;
        for(auto it : hash){
            if(it.ss>1){
                flag=false;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
    }
    return 0;
}


/*
    
*/
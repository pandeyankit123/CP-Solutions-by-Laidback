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
        string s,t; cin>>s>>t;
        vector<int> ab, ba;
        fo(0,n){
            if(s[i]=='a' && t[i]=='b')
                ab.pb(i);
            else if(s[i]=='b' && t[i]=='a')
                ba.pb(i);
        }
        if((ab.size()+ba.size())%2)
            cout<<-1;
        else{
            vector<pair<int, int>> sol;
            for(int i=0; i<((ab.size()/2)*2); i+=2)
                sol.pb(make_pair(ab[i]+1, ab[i+1]+1));
            for(int i=0; i<((ba.size()/2)*2); i+=2)
                sol.pb(make_pair(ba[i]+1, ba[i+1]+1));
            if(ab.size()%2){
                sol.pb(make_pair(ba[ba.size()-1]+1, ba[ba.size()-1]+1));
                sol.pb(make_pair(ba[ba.size()-1]+1, ab[ab.size()-1]+1));
            }
            cout<<sol.size()<<endl;
            fo(0, sol.size())
                cout<<sol[i].ff<<" "<<sol[i].ss<<endl;
        }
    }
    return 0;
}


/*
   
*/
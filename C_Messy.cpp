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
    // int t=1;
    while(t--){
        int n,k; cin>>n>>k;
        string str; cin>>str;
        vector<pair<int, int>> v;
        for(int i=0; i<n; i++){
            int j=i;
            if(i%2==0)
                while(str[j]!='(')
                    j++;
            else
                while(str[j]!=')')
                    j++;
            if(i != j){
                pair<int, int> p={i,j};
                v.pb(p);
                swap(str[i], str[j]);
            }
        }
        int ans=n/2;
        int i=1;
        while(ans!=k){
            pair<int, int> p={i,i+1};
            v.pb(p);
            i+=2;
            ans--;
        }
        cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++)
            cout<<v[i].ff+1<<" "<<v[i].ss+1<<endl;
    }
    return 0;
}


/*
    
*/
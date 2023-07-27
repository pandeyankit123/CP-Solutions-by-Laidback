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
#define fr(i,n,z) for(int i=n-1; i>=z; i--)
#define fo(i,z,n) for(int i=z; i<n; i++)
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

void fills(unordered_set<string> &s,vector<bool>& vis, string str){
    if(str.length() == 4){
        s.insert(str);
        return;
    }
    fo(i,0,10){
        if(!vis[i]){
            vis[i]=true;
            fills(s, vis, str+to_string(i));
            vis[i]=false;
        }
    }
}

bool bc(string str, string s, int b, int c){
    int bulls=0, cows=0;
    fo(i,0,4){
        fo(j,0,4){
            if(str[i]==s[j]){
                if(i==j)bulls++;
                else cows++;
            }
        }
    }
    if(bulls==b && cows==c)
        return true;
    else return false;
}

int main(){
    fastIO;
    unordered_set<string> s;
    vector<bool> vis(10, false);
    fills(s, vis, "");
    // int t; cin>>t;
    int t=1;
    while(t--){
        int n; cin>>n;
        while(n--){
            string str; cin>>str;
            int b,c; cin>>b>>c;
            auto ds=s;
            for(auto &it:s){
                if(!bc(str, it, b, c))
                    ds.erase(it);
            }
            s=ds;
        }
        if(s.size()==0) cout<<"Incorrect data"<<endl;
        else if(s.size()>1) cout<<"Need more data"<<endl;
        else cout<<*s.begin()<<endl;
    }
    return 0;
}


/*

*/
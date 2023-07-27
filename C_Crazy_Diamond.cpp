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

void swap(int p1, int p2, vector<pair<int,int>> &ans, vector<int> &v, vector<int> &loc){
    if(p1==p2)
        return;
    pair<int, int> p={p1+1, p2+1};
    ans.pb(p);
    int temp1=v[p1], temp2=v[p2];
    v[p1]=temp2; v[p2]=temp1;
    loc[v[p1]]=p1; loc[v[p2]]=p2;
}
void needSwap(int p1, int p2, vector<pair<int,int>> &ans, vector<int> &v, vector<int> &loc){
    int n=v.size();
    if(abs(p1-p2)>=n/2)
        swap(p1, p2, ans, v, loc);
    else{
        if(p1<n/2){
            swap(p1, n - 1, ans, v, loc);
            needSwap(p2, n - 1, ans, v, loc);
        }else{
            swap(p1, 0, ans, v, loc);
            needSwap(0, p2, ans, v, loc );
        }
    }
}

int main(){
    fastIO;
    // int t; cin>>t;
    int t=1;
    while(t--){
        int n; cin>>n;
        vector<int> v(n), loc(n);
        for(int i=0; i<n; i++)
            cin>>v[i], v[i]--, loc[v[i]]=i;
        vector<pair<int,int>> ans;
        for(int i=1; i<n-1; i++)
            needSwap(loc[i], i, ans, v, loc);
        if(v[0]!=0)
            swap(0, n-1, ans, v, loc);
        cout<<ans.size()<<endl;
        for(int i=0; i<ans.size(); i++)
            cout<<ans[i].ff<<" "<<ans[i].ss<<endl;
        // coutall(v);
    }
    return 0;
}


/*
    
*/
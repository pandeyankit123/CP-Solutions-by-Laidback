/*  Waadon se apne mukarta nahin,          */
/*  Question se main kabhi darta nahin.    */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback...                            */


#include<bits/stdc++.h>
using namespace std;

#define all(v) v.begin(),v.end()
#define ll long long
#define pb push_back
#define po pop_back
#define bg() begin()
#define ed() end()
#define ss second
#define ff first

int main(){
    int n,k,m; cin>>n>>k>>m;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    vector<int> hash(m, 0);
    vector<vector<int>> hashv(m);
    int count=1, ind=-1;
    for(int i=0; i<n; i++){
        hash[v[i]%m]++;
        hashv[v[i]%m].pb(v[i]);
        if(hash[v[i]%m]>count){
            ind=v[i]%m;
            count=hash[v[i]%m];
        }
    }
    if(ind==-1 || count<k)
        cout<<"No";
    else{
        cout<<"Yes"<<endl;
        for(int i=0; i<k; i++)
            cout<<hashv[ind][i]<<" ";
    }
    return 0;
}   


/*

*/
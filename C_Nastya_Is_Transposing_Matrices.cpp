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
        int n,m; cin>>n>>m;
        int mat1[n][m], mat2[n][m];
        vector<int> arr1[n+m-1], arr2[n+m-1];
        fo(0,n)
            for(int j=0; j<m; j++)
                cin>>mat1[i][j], arr1[i+j].pb(mat1[i][j]);
        fo(0,n)
            for(int j=0; j<m; j++)
                cin>>mat2[i][j], arr2[i+j].pb(mat2[i][j]);
        fo(0,n+m-1)
            sort(all(arr1[i])), sort(all(arr2[i]));
        fo(0,n+m-1){
            if(arr1[i]!=arr2[i]){
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
    }
    return 0;
}


/*
    
*/
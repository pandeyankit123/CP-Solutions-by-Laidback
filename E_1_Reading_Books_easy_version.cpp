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
    // int t; cin>>t;
    int t=1;
    while(t--){
        int n,k; cin>>n>>k;
        int arr[n][3];
        for(int i=0; i<n; i++)
            cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
        vector<int> common, a, b;
        for(int i=0; i<n; i++){
            if(arr[i][1]==1 && arr[i][2]==1)
                common.pb(arr[i][0]);
            else if(arr[i][1]==1)
                a.pb(arr[i][0]);
            else if(arr[i][2]==1)
                b.pb(arr[i][0]);
        }
        sort(all(a)); sort(all(b));
        int len=min(a.size(), b.size());
        for(int i=0; i<len; i++)
            common.pb(a[i]+b[i]);
        if(common.size()>=k){
            sort(all(common));
            int ans=0;
            for(int i=0; i<k; i++)
                ans+=common[i];
            cout<<ans;
        }
        else cout<<-1;
    }
    return 0;
}


/*
    
*/
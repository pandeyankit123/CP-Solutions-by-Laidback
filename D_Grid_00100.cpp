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
        int arr[n][n];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                arr[i][j]=0;
        int ans=(k%n==0)?0:2;
        int i=0,j=0;
        while(k--){
            arr[i][j]=1;
            i++; j++;
            j=j%n;
            if(i==n){
                i=0;
                j=(j+1)%n;
            }
        }
        cout<<ans<<endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
                cout<<arr[i][j];
            cout<<endl;
        }
    }
    return 0;
}


/*
    
*/
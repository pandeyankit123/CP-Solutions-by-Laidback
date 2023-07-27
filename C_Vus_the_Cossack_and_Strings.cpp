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
        string a,b; cin>>a>>b;
        int zerob=0, oneb=0;
        for(int i=0; i<b.length(); i++){
            if(b[i]=='1')
                oneb++;
            else zerob++;
        }
        int zeroa=0, onea=0, ans=0;
        for(int i=0; i<b.length(); i++){
            if(a[i]=='1')
                onea++;
            else zeroa++;
        }
        if(onea%2==oneb%2)
            ans++;
        for(int i=b.length(); i<a.length(); i++){
            if(a[i]=='1')
                onea++;
            else zeroa++;
            if(a[i-b.length()]=='1')
                onea--;
            else zeroa--;
            if(onea%2==oneb%2)
                ans++;    
        }
        cout<<ans;
    }
    return 0;
}


/*
    
*/
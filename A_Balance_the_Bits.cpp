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
    int t; cin>>t;
    // int t=1;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int cnt1=0;
        fo(0,n)
            if(s[i]=='1')
                cnt1++;
        if(s[0]=='1' && s[n-1]=='1' && cnt1%2==0){
            cout<<"YES"<<endl;
            char a[n], b[n];
            int c=0;
            bool open=true;
            fo(0,n){
                if(s[i]=='1'){
                    if(c<cnt1/2)
                        a[i]='(', b[i]='(';
                    else a[i]=')', b[i]=')';
                    c++;
                }else{
                    if(open)
                        a[i]='(', b[i]=')';
                    else a[i]=')', b[i]='(';
                    open=!open;
                }
            }
            fo(0,n) cout<<a[i];
            newl;
            fo(0,n) cout<<b[i];
            newl;
        }else cout<<"NO"<<endl;
    }
    return 0;
}


/*
    
*/
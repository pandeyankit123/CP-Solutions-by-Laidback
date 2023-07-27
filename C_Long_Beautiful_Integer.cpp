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
        int n,k; cin>>n>>k;
        string s; cin>>s;
        vector<int> firstK(k), a(n);
        int pos;
        for(int i=0; i<n; i++){
            a[i]=s[i]-48;
            if(i<k){
                firstK[i]=a[i];
                if(firstK[i]!=9)
                    pos=i;
            }
        }
        bool inc=false;
        for(int i=k; i<n; i++){
            if(firstK[i%k]<a[i]){
                inc=true;
                break;
            }else if(firstK[i%k]>a[i])
                break;
        }
        if(inc){
            firstK[pos]++;
            for(int i=pos+1; i<k; i++)
                firstK[i]=0;
        }
        cout<<n<<endl;
        for(int i=0; i<n; i++)
            cout<<firstK[i%k];
    }
    return 0;
}


/*
    
*/
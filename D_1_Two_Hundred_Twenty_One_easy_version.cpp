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
        int n,q; cin>>n>>q;
        string str; cin>>str;
        vector<int> presum(n);
        if(str[0]=='+')
            presum[0]=1;
        else 
            presum[0]=-1;
        for(int i=1; i<n; i++){
            presum[i]=presum[i-1];
            int sign=(i%2==0?1:-1);
            if(str[i]=='+')
                presum[i]+=sign*1;
            else 
                presum[i]+=sign*-1;
        }
        while(q--){
            int l,r; cin>>l>>r;
            l--; r--;
            int sum=presum[r];
            if(l!=0)
                sum-=presum[l-1];
            if(sum==0)
                cout<<0<<endl;
            else{
                if((r-l+1)%2)
                    cout<<1<<endl;
                else cout<<2<<endl;
            }
        }
    }
    return 0;
}


/*
    
*/
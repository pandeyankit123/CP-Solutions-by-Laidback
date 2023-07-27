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
        int n,w; cin>>n>>w;
        int ex=0, in=0;
        for(int i=0; i<n; i++){
            int c; cin>>c;
            if(c>=0){
                in+=c;
                if(ex==0)
                    w-=c;
                else{
                    if(c>=ex)
                        c-=ex, ex=0, w-=c;
                    else
                        ex-=c;
                }
            }
            else{
                if(abs(c)>in)
                    w-=(abs(c)-in), in=0;
                else in-=abs(c);
                ex+=abs(c);
            }
        }
        if(w+1>=0)
            cout<<w+1;
        else cout<<0;   
    }
    return 0;
}


/*

*/
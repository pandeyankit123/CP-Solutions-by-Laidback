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
#define fr(i,n,z) for(int i=n-1; i>=z; i--)
#define fo(i,z,n) for(int i=z; i<n; i++)
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
        int xa,ya,xb,yb,xc,yc; cin>>xa>>ya>>xb>>yb>>xc>>yc;
        int dx1=xa-xb, dx2=xa-xc, dy1=ya-yb, dy2=ya-yc, ans=0;
        if(dx1>=0 &&  dx2>=0){
            ans+=min(dx1,dx2);
            if(dy1>=0 &&  dy2>=0)
                ans+=min(dy1,dy2);
            else if(dy1<0 &&  dy2<0)
                ans+=abs(max(dy1,dy2));
        }
        else if(dx1<0 &&  dx2<0){
            ans+=abs(max(dx1,dx2));
            if(dy1>=0 &&  dy2>=0)
                ans+=min(dy1,dy2);
            else if(dy1<0 &&  dy2<0)
                ans+=abs(max(dy1,dy2));
        }
        else if(dx1>=0 &&  dx2<0){
            if(dy1>=0 &&  dy2>=0)
                ans+=min(dy1,dy2);
            else if(dy1<0 &&  dy2<0)
                ans+=abs(max(dy1,dy2));
        }
        else if(dx1<0 &&  dx2>=0){
            if(dy1>=0 &&  dy2>=0)
                ans+=min(dy1,dy2);
            else if(dy1<0 &&  dy2<0)
                ans+=abs(max(dy1,dy2));
        }
        cout<<ans+1<<endl;
    }
    return 0;
}


/*
    
*/
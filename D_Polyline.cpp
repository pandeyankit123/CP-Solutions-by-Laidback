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
        int x1,y1,x2,y2,x3,y3; cin>>x1>>y1>>x2>>y2>>x3>>y3;
        if(y1==y2 && y2==y3)
            cout<<1;
        else if(x1==x2 && x2==x3)
            cout<<1;
        else{
            if(y1==y2){
                if(x1==x3 || x2==x3)
                    cout<<2;
                else if((x3>x1 && x3>x2) || (x3<x1 && x3<x2))
                    cout<<2;
                else cout<<3;
            }
            else if(y2==y3){
                if(x2==x1 || x3==x1)
                    cout<<2;
                else if((x1>x2 && x1>x3) || (x1<x2 && x1<x3))
                    cout<<2;
                else cout<<3;
            }
            else if(y1==y3){
                if(x1==x2 || x3==x2)
                    cout<<2;
                else if((x2>x1 && x2>x3) || (x2<x1 && x2<x3))
                    cout<<2;
                else cout<<3;
            }
            else if(x1==x2){
                if(y1==y3 || y2==y3)
                    cout<<2;
                else if((y3>y1 && y3>y2) || (y3<y1 && y3<y2))
                    cout<<2;
                else cout<<3;
            }
            else if(x2==x3){
                if(y2==y1 || y3==y1)
                    cout<<2;
                else if((y1>y2 && y1>y3) || (y1<y2 && y1<y3))
                    cout<<2;
                else cout<<3;
            }
            else if(x1==x3){
                if(y1==y2 || y3==y2)
                    cout<<2;
                else if((y2>y1 && y2>y3) || (y2<y1 && y2<y3))
                    cout<<2;
                else cout<<3;
            }
            else cout<<3;
        }
    }
    return 0;
}


/*
    
*/
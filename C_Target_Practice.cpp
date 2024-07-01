/*      __      ___      ______   ______    _____       ___      _____   _    __
       / /     / \ \    |__  __| | |  \ \  | |  \ \    / \ \    |  ___| | |  / /
      / /     / /_\ \      ||    | |   | | | |__/ /   / /_\ \   | |     | | / /
     / /___  / /---\ \   __||__  | |   | | | |  \ \  / /---\ \  | |___  | | \ \
    /_____/ /_/     \_\ |______| |_|__/_/  |_|__/_/ /_/     \_\ |_____| |_|  \_\ 

    Waadon se apne mukarta nahin,
    Question se main kabhi darta nahin.
    Laidback O Laidback!
    Laidback O Laidback!
    Laidback O Laidback!
    Laidback...
*/


#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define coutall(v) for(int i=0; i<v.size(); i++) cout<<v[i]<<" "; cout<<endl
#define cinall(v) for(int i=0; i<v.size(); i++) cin>>v[i]
#define fr(i,n,z) for(int i=n-1; i>=z; i--)
#define cout2n(n, m) cout<<n<<" "<<m<<endl
#define fo(i,z,n) for(int i=z; i<n; i++)
#define all(v) v.begin(),v.end()
#define coutn(n) cout<<n<<endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
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
    int T; cin>>T;
    // int T=1;
    while(T--){
        vector<string> v(10);
        cinall(v); int sum=0;
        fo(i,0,10){
            fo(j,0,10){
                if(v[i][j]=='X'){
                    if(i==0 || j==0 || i==9 || j==9) sum++;
                    else if((i==1 && j>0 && j<9) || (i==8 && j>0 && j<9) || (j==1 && i>0 && i<9) || (j==8 && i>0 && i<9))
                        sum+=2;
                    else if((i==2 && j>1 && j<8) || (i==7 && j>1 && j<8) || (j==2 && i>1 && i<8) || (j==7 && i>1 && i<8))
                        sum+=3;
                    else if((i==3 && j>2 && j<7) || (i==6 && j>2 && j<7) || (j==3 && i>2 && i<7) || (j==6 && i>2 && i<7))
                        sum+=4;
                    else if((i==4 && j>3 && j<6) || (i==5 && j>3 && j<6) || (j==4 && i>3 && i<6) || (j==5 && i>3 && i<6))
                        sum+=5;
                }
            }
        }coutn(sum); 
    }
    return 0;
}


/*
    
*/


/*     __     ___     ____   _____    ____      ___     ____   _   __
      / /    / \ \   |_  _| | | \ \  | | \ \   / \ \   |  __| | | / /
     / /__  / /-\ \   _||_  | |  | | | |-< <  / /-\ \  | |__  | |< <
    /____/ /_/   \_\ |____| |_|_/_/  |_|_/_/ /_/   \_\ |____| |_| \_\ ,
*/
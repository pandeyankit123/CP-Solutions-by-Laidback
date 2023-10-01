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
        vector<int> v(n);
        int ind=-1;
        fo(i,0,n){
            cin>>v[i];
            if(v[i]==n) ind=i;
        }
        if(n==1) cout<<v[0]<<endl;
        else if(ind!=0){
            vector<vector<int>> poss;
            int l=ind-1, r=ind-1;
            while(l>=0){
                vector<int> temp;
                fr(i,r+1,l)
                    temp.pb(v[i]);
                fo(i,0,l)
                    temp.pb(v[i]);
                poss.pb(temp); l--;
            }
            sort(all(poss)); reverse(all(poss));
            vector<int> opt;
            fo(i,ind,n)
                opt.pb(v[i]);
            for(auto it:poss[0])
                opt.pb(it);
            if(ind==n-1){
                vector<int> opt2;
                opt2.pb(n);
                fo(i,0,n-1)
                    opt2.pb(v[i]);
                if(opt2>opt) 
                    {coutall(opt2);}
                else {coutall(opt);}
            }else {coutall(opt);}
        }else{
            fo(i,0,n){
                if(v[i]==n-1)
                    {ind=i; break;}
            }
            vector<vector<int>> poss;
            int l=ind-1, r=ind-1;
            while(l>=0){
                vector<int> temp;
                fr(i,r+1,l)
                    temp.pb(v[i]);
                fo(i,0,l)
                    temp.pb(v[i]);
                poss.pb(temp); l--;
            }
            sort(all(poss)); reverse(all(poss));
            vector<int> opt;
            fo(i,ind,n)
                opt.pb(v[i]);
            for(auto it:poss[0])
                opt.pb(it);
            if(ind==n-1){
                vector<int> opt2;
                opt2.pb(n-1);
                fo(i,0,n-1)
                    opt2.pb(v[i]);
                if(opt2>opt) 
                    {coutall(opt2);}
                else {coutall(opt);}
            }else {coutall(opt);}
        }
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
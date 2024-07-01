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
#define coutall(v) for(auto it : v) cout<<it<<" "; cout<<endl
#define cinall(v) for(int z=0; z<v.size(); z++) cin>>v[z]
#define fr(i,n,z) for(int i=n-1; i>=z; i--)
#define cout2n(n, m) cout<<n<<" "<<m<<endl
#define fo(i,z,n) for(int i=z; i<n; i++)
#define all(v) v.begin(),v.end()
#define coutn(n) cout<<n<<endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define newl cout<<endl;
#define int long long
#define pf push_front
#define pof pop_front
#define pb push_back
#define po pop_back
#define ss second
#define ff first

const int MOD=1e7+10;
const int N=1e7+10;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.ff!=b.ff)
        return a.ff<b.ff;
    return a.ss<b.ss;
}

signed main(){
    fastIO;
    int T; cin>>T;
    // int T=1;
    while(T--){
        int n, m; cin>>n>>m;
	    vector<string> s(n); 
        cinall(s); bool flag=true;
	    vector<vector<char>> v(n, vector<char> (m));
	    fo(i,0,n) fo(j,0,m) v[i][j]=s[i][j]; 
	    char ch='W';
	    fo(i, 0, n){
		    fo(j, 0, m){
			    if(v[i][j]=='U'){
				    v[i][j]=ch;
				    if(ch=='W') ch='B';
				    else ch='W';
				    v[i+1][j]=ch;
			    }
		    } if(ch=='B') {flag=false; break;}
	    } if(flag){
            ch='W';
            fo(j, 0, m){
                fo(i, 0, n){
                    if(v[i][j]=='L'){
                        v[i][j]=ch;
                        if(ch=='W') ch='B';
                        else ch='W';
                        v[i][j+1]=ch;
                    }
                } if(ch=='B') {flag=false; break;}
            }
        } if(flag){
            fo(i, 0, n){
                fo(j,0,m) cout<<v[i][j];
                newl;
            }
        } else coutn(-1);
    } return 0;
}


/*
    
*/
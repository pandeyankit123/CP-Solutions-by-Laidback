/*       __      ___       _______   _______    ______        ___       _______   _    __
        / /     / \ \     |__   __| | |   \ \  | |   \ \     / \ \     |  _____| | |  / /
       / /     / /_\ \       | |    | |    | | | |___/ /    / /_\ \    | |       | | / /
      ----------------------------------------------------------------------------------
     / /___  / /-----\ \   __| |__  | |    | | | |   \ \  / /-----\ \  | |_____  | |  \ \
    /_____/ /_/       \_\ |_______| |_|___/_/  |_|___/_/ /_/       \_\ |_______| |_|   \_\ 

        __      ___      ______   ______    _____       ___      _____   _   __
       / /     / \ \    |__  __| | |  \ \  | |  \ \    / \ \    |  ___| | | / /
      / /     / /_\ \      ||    | |   | | | |__/ /   / /_\ \   | |     | |/ /
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
        set<int> s;
        fo(i,0,n)
            cin>>v[i], s.insert(v[i]);
        if(n<4) coutn(-1);
        else if(n==4){
            if((v[0]!=(*s.begin()) || v[0]!=(*(--s.end()))) && (v[3]!=(*s.begin()) || v[3]!=(*(--s.end()))))
                cout2n(1,4);
            else coutn(-1);
        }else{
            int i=0, j=n-1;
            bool fl=false;
            while(1){
                bool f1=false, f2=false;
                if((*s.begin())==v[i]) s.erase(s.begin()), i++;
                else if((*(--s.end()))==v[i]) s.erase((--s.end())), i++;
                else f1=true;
                if((*s.begin())==v[j]) s.erase(s.begin()), j--;
                else if((*(--s.end()))==v[j]) s.erase((--s.end())), j--;
                else f2=true;
                if(f1 && f2)  break;
                if(j-i+1<4) {fl=true; break;}
            }
            if(fl) coutn(-1);
            else cout2n(i+1,j+1);
        }
    }
    return 0;
}


/*  

*/
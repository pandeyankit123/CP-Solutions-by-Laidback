/*       __      ___       _______   _______    ______        ___       _______   _    __
        / /     / \ \     |__   __| | |   \ \  | |   \ \     / \ \     |  _____| | |  / /
       / /     / / \ \       | |    | |    | | | |   / /    / / \ \    | |       | | / /
      / /     / /---\ \      | |    | |    | | | |--< <    / /---\ \   | |       | | \ \
     / /___  / /-----\ \   __| |__  | |    | | | |   \ \  / /-----\ \  | |_____  | |  \ \
    /_____/ /_/       \_\ |_______| |_|___/_/  |_|___/_/ /_/       \_\ |_______| |_|   \_\ 

        __      ___      ______   ______    _____       ___      _____   _   __
       / /     / \ \    |__  __| | |  \ \  | |  \ \    / \ \    |  ___| | | / /
      / /     / /_\ \      ||    | |   | | | |__/ /   / /_\ \   | |     | |/ /
     / /___  / /---\ \   __||__  | |   | | | |  \ \  / /---\ \  | |___  | | \ \
    /_____/ /_/     \_\ |______| |_|__/_/  |_|__/_/ /_/     \_\ |_____| |_|  \_\ 

       __     ___     ____   _____    ____      ___     ____   _   __
      / /    / \ \   |_  _| | | \ \  | | \ \   / \ \   |  __| | | / /
     / /__  / /-\ \   _||_  | |  | | | |-< <  / /-\ \  | |__  | |< <
    /____/ /_/   \_\ |____| |_|_/_/  |_|_/_/ /_/   \_\ |____| |_| \_\ 

      __     ___    ___   ____   _____    ___    ___   _  __
     / /__  / \ \  |_ _| | |\ \ | |_) )  / \ \  | __| | |/ /
    /____/ /_/ \_\ |___| |_|/_/ |_|_)_) /_/ \_\ |___| |_|\_\ 

    L      A      I      D      B      A      C      K 

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
        int n, sum=0; cin>>n;
        vector<int> v(n), p;
        fo(i,0,n){
            cin>>v[i];
            if((i+1)%2==0){
                int cnt=0, temp=i+1;
                while(temp%2==0 && temp>0)
                    cnt++, temp/=2;
                p.pb(cnt);
            }if(v[i]%2==0){
                int cnt=0, temp=v[i];
                while(temp%2==0 && temp>0)
                    cnt++, temp/=2;
                sum+=cnt;
            }
        }
        if(sum>=n) coutn(0);
        else{
            sort(all(p)); bool f=false; int cnt=0, i=p.size()-1;
            while(sum<n && i>=0){
                sum+=p[i]; cnt++, i--;
                if(sum>=n) f=true;
            }
            if(f) coutn(cnt);
            else coutn(-1);
        }
    }
    return 0;
}


/*
    
*/
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
const int N=15000001;   

int main(){
    fastIO;
    vector<int> fact(N);
    for(int i=0; i<N; i++)
        fact[i]=i;
    for (int i=2; i*i<=N; i++){
        if (fact[i]==i) {
            for (int j=i*i; j<N; j+=i){
                if(fact[j]==j)
                    fact[j]=i;
            }
        }
    }
    int n; cin>>n;
    vector<int> v(n);
    cinall(v);
    int gcdall=__gcd(v[0], v[1]);
    for(int i=2; i<v.size(); i++)
        gcdall=__gcd(gcdall, v[i]);
    bool flag=false;
    for(int i=0; i<v.size(); i++){
        v[i]/=gcdall;
        if(v[i]>1) flag=true;
    }
    if(!flag)
        cout<<-1;
    else{
        int ans=0;
        vector<int> common(N);
        for(int i=0; i<n; i++){
            int num=v[i];
            while(num>1){
                int p=fact[num];
                common[p]++;
                ans=max(ans, common[p]);
                while(num%p==0)
                    num/=p;
            }
        }
        cout<<n-ans;
    }
    return 0;
}


/*
    
*/
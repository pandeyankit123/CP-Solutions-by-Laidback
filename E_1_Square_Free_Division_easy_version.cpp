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
vector<bool> isprime(N, true);
vector<int> hp(N,0);
int main(){
    fastIO;
    isprime[0]=isprime[1]=false;
    for (int i=2; i<N; i++){
        if(isprime[i]==true){
            hp[i]=i;    
            for(int j=2*i; j<N; j+=i)
                isprime[j]=false, hp[j]=i;
        }
    }
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        unordered_set<int> hash;
        int count=1;
        for(int i=0; i<n; i++){
            int num; cin>>num;
            map<int, int> primefac;
            while(num>1){
                int val=hp[num];
                while(num%val==0){
                    num/=val;
                    primefac[val]++;
                }
            }
            int var=1;
            for(auto it:primefac)
                if(it.ss%2)
                    var*=it.ff;
            auto it=hash.find(var);
            if(it!=hash.end()){
                count++;
                hash.clear();
            };
            hash.insert(var);
        }
        cout<<count<<endl;
    }
    return 0;
}


/*
    
*/
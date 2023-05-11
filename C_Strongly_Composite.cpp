/*  Waadon se apne mukarta nahin,          */
/*  Question se main kabhi darta nahin.    */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback...                            */


#include<bits/stdc++.h>
using namespace std;

#define all(v) v.begin(),v.end()
#define ll long long
#define pb push_back
#define po pop_back
#define bg() begin()
#define ed() end()
#define ss second
#define ff first

const int N=1e7+5;
vector<bool> isprime(N, true);
vector<int> hp(N,0);

int main(){
    isprime[0]=isprime[1]=false;
    for(int i=2; i<N; i++){
        if(isprime[i]==true){
            hp[i]=i;
            for(int j=2*i; j<N; j+=i){
                isprime[j]=false;
                hp[j]=i;
            }
        }
    }
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        map<int, int> hash;
        for(int i=0; i<n; i++){
            cin>>v[i];
            while (v[i]>1){
                int prime=hp[v[i]];
                while(v[i]%prime==0)
                    v[i]/=prime, hash[prime]++;
            } 
        }
        int ans=0, cnt=0;
        for(auto it: hash){
            ans+=it.ss/2;
            if(it.ss%2)
                cnt++;
        }
        ans+=cnt/3;
        cout<<ans<<endl;
    }
    return 0;
}


/*
    
*/
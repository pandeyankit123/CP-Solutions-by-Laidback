#include<bits/stdc++.h>
using namespace std;

#define all(v) v.begin(),v.end()
#define ll long long
#define pb push_back
#define po pop_back
#define b() begin()
#define e() end()
#define s second
#define f first

const ll mod=1e9+7;
const int N=1e6+5;
ll arr[N];

int main(){
    arr[0]=1;
    for(int i=1; i<N; i++)
        arr[i]=(arr[i-1]*2)%mod;
    string str; cin>>str;
    int cnta=0;
    ll sum=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='a')
            cnta++;
        if(str[i]=='b'){
            if(cnta>0)
                sum+=arr[cnta]-1, sum%=mod;
        }
    }
    cout<<sum%mod;
    return 0;
}


/*
    
*/


/*  Waadon se apne mukarta nahin,          */
/*  Question se main kabhi darta nahin.    */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback...                            */
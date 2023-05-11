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

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string str; cin>>str;
        map<ll, ll> hash;
        hash[0]=1;
        ll sum=0;
        for(int i=0; i<str.length(); i++){
            int ele=str[i]-'0';
            sum+=ele;
            ll k=sum-(i+1);
            hash[k]++;
        }
        ll res=0;
        for(auto it: hash)
            res+=it.ss*(it.ss-1)/2;
        cout<<res<<endl;
    }
    return 0;
}


/*
    
*/
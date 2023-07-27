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
#define fr(n,z) for(int i=n-1; i>=z; i--)
#define fo(z,n) for(int i=z; i<n; i++)
#define all(v) v.begin(),v.end()
#define newl cout<<endl;
#define ll long long
#define pb push_back
#define mp make_pair
#define po pop_back
#define ss second
#define ff first

const int MOD=1e7+10;
const int N=1e7+10;

ll product(vector<int> count){
    ll pro = 1L;
    fo(0, count.size())
        pro=pro*count[i];
    return pro;
}   

int main(){
    fastIO;
    // int t; cin>>t;
    int t=1;
    while(t--){
        ll k; cin>>k;
        char arr[]={'c', 'o', 'd', 'e', 'f', 'o', 'r', 'c', 'e', 's'};
        vector<int> count(10, 1);
        int i=0;
        while(product(count)<k){
            count[i]++; i++;
            if(i==count.size())
                i=0;
        }
        string str="";
        fo(0, count.size())
            while(count[i]--)
                str+=arr[i];
        cout<<str;
    }
    return 0;
}


/*
    
*/
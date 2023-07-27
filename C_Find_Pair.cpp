// /*  Waadon se apne mukarta nahin,          */
// /*  Question se main kabhi darta nahin.    */
// /*  Laidback O Laidback!                   */
// /*  Laidback O Laidback!                   */
// /*  Laidback O Laidback!                   */
// /*  Laidback...                            */


// #include<bits/stdc++.h>
// using namespace std;

// #define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define coutall(v) for(ll i=0; i<v.size(); i++) cout<<v[i]<<" "; cout<<endl;
// #define cinall(v) for(ll i=0; i<v.size(); i++) cin>>v[i];
// #define all(v) v.begin(),v.end()
// #define newl cout<<endl;
// #define ll long long
// #define pb push_back
// #define po pop_back
// #define ss second
// #define ff first

// const int MOD=1e7+10;
// const int N=1e7+10;

// int main(){
//     fastIO;
//     // int t; cin>>t;
//     int t=1;
//     while(t--){
//         ll n,k; cin>>n>>k;
//         vector<ll> v(n);
//         cinall(v);
//         sort(all(v));
//         vector<pair<ll, ll>> hash((v[0]>-1?v[n-1]:abs(v[0]))+2);
//         for(ll i=0; i<n; i++){
//             if(v[i]>=0)
//                 hash[abs(v[i])].ff++;
//             else
//                 hash[abs(v[i])].ss++;
//         }
//         // for(ll i=0; i<hash.size(); i++) cout<<hash[i].ff<<" "<<hash[i].ss<<endl; cout<<endl;
//         vector<ll> v2;
//         for(ll i=0; i<hash.size(); i++){
//             if(hash[i].ff>0)
//                 v2.pb(i);
//             if(hash[i].ss>0)
//                 v2.pb(-1*i);
//         }
//         sort(all(v2));
//         // coutall(v2);
//         vector<ll> val(v2.size());
//         for(ll i=0; i<v2.size(); i++)
//             val[i]=(v2[i]>=0?hash[abs(v2[i])].ff:hash[abs(v2[i])].ss)*n + (i>0?val[i-1]:0);
//         // coutall(val);
//         ll i=0;
//         while(i<v2.size()){
//             if(k>val[i])
//                 i++;
//             else break;
//         }
//         // cout<<i<<endl;
//         ll diff=(k-(i>0?val[i-1]:0));
//         ll i2=diff%(v2[i]>=0?hash[abs(v2[i])].ff:hash[abs(v2[i])].ss)?diff/(v2[i]>=0?hash[abs(v2[i])].ff:hash[abs(v2[i])].ss):(diff-1)/(v2[i]>=0?hash[abs(v2[i])].ff:hash[abs(v2[i])].ss);
//         cout<<v2[i]<<" "<<v[i2];
//     }
//     return 0;
// }


// /*
    
// */

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

int main(){
    fastIO;
    // int t; cin>>t;
    int t=1;
    while(t--){
        ll n,k; cin>>n>>k;
        vector<ll> v(n);
        cinall(v);
        sort(all(v));
        vector<int> count(n);
        for(int i=0, j=0; i<n; i++){
            if(v[i]==v[j])
                count[j]++;
            else{
                count[i]=1;
                j=i;
            }
        }
        int start=0;
        while(true){
            ll total=count[start]*n;
            if(k>total){
                k-=total;
                start++;
                while(count[start]==0)
                    start++;
            }
            else{
                int a=v[start];
                int b;
                ll c=count[start];
                if(k<=start*c)
                    b=v[((k-1)/c)];
                else{
                    k-=start*c;
                    if(k<=c*c)
                        b=a;
                    else{
                        k-=c*c;
                        int ind=(start+c+(k-1)/c);
                        b=v[ind];
                    }
                }
                cout<<a<<" "<<b;
                break;
            }
        }
    }
    return 0;
}


/*
    
*/
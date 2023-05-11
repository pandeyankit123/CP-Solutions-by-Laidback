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
    int n; cin>>n;
    vector<int> pos, neg, zero;
    vector<int> v(n);
    int it=0, ele=INT_MAX;
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
        if(v[i]==0) zero.pb(i+1);
        else if(v[i]<0){
            neg.pb(i+1);
            if(abs(v[i])<ele)
                ele=abs(v[i]), it=i+1;
        }
        else pos.pb(i+1);
    }
    if(neg.size()%2){
        for(int i=0; i<neg.size(); i++)
            if(neg[i]!=it)
                pos.pb(neg[i]);
        zero.pb(it);
    }
    else
        for(int i=0; i<neg.size(); i++)
            pos.pb(neg[i]);
    if(!zero.empty()){
        for(int i=0; i<zero.size()-1; i++)
            cout<<1<<" "<<zero[i]<<" "<<zero[i+1]<<endl;
        if(!pos.empty())
            cout<<2<<" "<<zero[zero.size()-1]<<endl;
    }
    if(!pos.empty())
        for(int i=0; i<pos.size()-1; i++)
            cout<<1<<" "<<pos[i]<<" "<<pos[i+1]<<endl;
    return 0;
}


/*
    
*/
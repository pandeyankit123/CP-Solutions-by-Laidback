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
        int k; cin>>k;
        if(k==0)
            cout<<"abcde";
        else{
            vector<int> count(26);
            for(int i=0; i<26; i++){
                if(k==0)
                    break;
                int c=1;
                while(c*(c+1)/2<=k)
                    c++;
                k-=c*(c-1)/2;
                count[i]=c;
            }
            string ans="";
            for(int i=0; i<26; i++){
                char ch=i+'a';
                while(count[i])
                    ans+=ch, count[i]--;
            }
            cout<<ans;
        }
    }
    return 0;
}


/*
    
*/
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

int f(string s, vector<char> s3, int n){
    int cnt=0;
    for(int i=0; i<n; i++)
        if(s[i]!=s3[i])
            cnt++; 
    return cnt;
}

int main(){
    fastIO;
    // int t; cin>>t;
    int t=1;
    while(t--){
        int n,t; cin>>n>>t;
        string s1,s2; cin>>s1>>s2;
        vector<char> s3(n, 'Z');
        vector<int> same;
        for(int i=0; i<n; i++)
            if(s1[i]==s2[i])
                same.pb(i);
        int t2=n-t;
        int i=0;
        while(t2>0 && i<same.size())
            s3[same[i]]=s1[same[i]], t2--, i++;
        int j=0; i=0;
        while(t2>0 && i<n && j<n){
            if(s3[i]=='Z'){
                if(s3[j]=='Z' && i!=j){
                    s3[i]=s1[i];
                    s3[j]=s2[j];
                    t2--;
                }
                else j++;
            }
            else i++;
        }
        i=0;
        while(i<n){
            if(s3[i]=='Z'){
                if(s1[i]!='a' && s2[i]!='a')
                    s3[i]='a';
                else if(s1[i]!='z' && s2[i]!='z')
                    s3[i]='z';
                else if(s1[i]!='a' && s2[i]!='z')
                    s3[i]='b';
                else if(s1[i]!='z' && s2[i]!='a')
                    s3[i]='b';
                else if(s1[i]!='a' || s2[i]!='a')
                    s3[i]='z';
                else if(s1[i]!='z' || s2[i]!='z')
                    s3[i]='a';
                i++;
            }
            else i++;
        }
        if(f(s1,s3, n)==t && f(s2,s3, n)==t){
            for(int i=0; i<n; i++)
                cout<<s3[i];
        }
        else cout<<-1;
    }
    return 0;
}


/*
    
*/
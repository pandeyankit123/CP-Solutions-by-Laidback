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

vector<int> toarr(int var, int k){
    vector<int> temp;
    for(int i=0; i<k; i++){
        int dig=var%10;
        temp.pb(dig);
        var/=10;
    }
    reverse(all(temp));
    return temp;
}

void permutation(string str, string ans, vector<string> &permu){
    if(str.length()==0){
        permu.pb(ans);
        return;
    }
    else{
        for(int i=0; i<str.length(); i++){
            char ch=str[i];
            string ros=str.substr(0, i)+str.substr(i+1);
            permutation(ros, ans+ch, permu);
        }
    }
}

int func(vector<vector<int> > v, int n, string str){
    vector<int> vn(n);
    for(int i=0; i<n; i++){
        int temp=0, po10=1;
        for(int j=1; j<str.length(); j++)
            po10*=10;
        for(int j=0; j<str.length(); j++){
            temp+=v[i][str[j]-48]*po10;
            po10/=10;
        }
        vn[i]=temp;
    }
    sort(all(vn));
    return (vn[n-1]-vn[0]);
}

int main(){
    int n, k; cin>>n>>k;
    vector<vector<int> > v;
    for(int i=0; i<n; i++){
        int var; cin>>var;
        v.pb(toarr(var, k));
    }
    string str="";
    for(int i=0; i<k; i++)
        str.pb(i+48);
    vector<string> permu;
    permutation(str, "", permu);
    int ans=INT_MAX;
    for(int i=0; i<permu.size(); i++){
        int temp=func(v, n, permu[i]);
        if(temp<ans)
            ans=temp;
    }
    cout<<ans;
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
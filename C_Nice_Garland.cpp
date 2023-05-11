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
#define b() begin()
#define e() end()
#define s second
#define f first

int main(){
    int n; cin>>n;
    string str; cin>>str;
    string arr[]={"RGB", "RBG", "GRB", "GBR", "BRG", "BGR"};
    vector<string> v(6, "");
    vector<int> val(6, 0);
    int itr=n/3;
    if(n%3)
        itr++;
    int diff=(itr*3)-n;
    for(int ind=0; ind<6; ind++){
        for(int i=0; i<itr; i++)
            v[ind]+=arr[ind];
        for(int i=0; i<diff; i++)
            v[ind].po();
        for(int i=0; i<n; i++){
            if(str[i]!=v[ind][i])
                val[ind]++;
        }
    }
    int mn=*min_element(all(val));
    int ind;
    for(int i=0; i<6; i++){
        if(val[i]==mn){
            ind=i;
            break;
        }
    }
    cout<<mn<<endl<<v[ind];
    return 0;
}


/*
    
*/
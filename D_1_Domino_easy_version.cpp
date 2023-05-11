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
    int t; cin>>t;
    while(t--){
        int n,m,k; cin>>n>>m>>k;
        if(n==1 && k==0)
            cout<<"NO"<<endl;
        else if(m==1 && k>0)
            cout<<"NO"<<endl;
        else if(m%2){
            int temp=n*(m-1)/2;
            if(k>temp || k%2)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else if(n%2){
            if(k<m/2 || (k-m/2)%2)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else{
            if(k%2)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    return 0;
}


/*
    
*/
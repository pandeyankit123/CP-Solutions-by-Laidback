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
    vector<int> table(101);
    table[0]=table[1]=0;
    for(int i=2; i<101; i++)
        table[i]=i*(i-1)/2;
    while(t--){
        int n,k; cin>>n>>k;
        int cnt1=0, cntn1=-1;
        for(int i=0; i<101; i++){
            if(k==0){
                if(n==2){
                    cnt1=cntn1=1;
                    break;
                }
            }
            cnt1=i, cntn1=-1;
            int temp=k-table[cnt1];
            auto it=find(all(table), temp);
            if(it!=table.end() )
                cntn1=it-table.bg();
            if(cnt1+cntn1==n){
                break;
            }
        }
        if(cntn1!=-1){
            vector<int> sol;
            for(int i=0; i<cnt1; i++)
                sol.pb(1);
            for(int i=0; i<cntn1; i++)
                sol.pb(-1);
            cout<<"YES"<<endl;
            for(int i=0; i<sol.size(); i++)
                cout<<sol[i]<<" ";
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}


/*
    
*/
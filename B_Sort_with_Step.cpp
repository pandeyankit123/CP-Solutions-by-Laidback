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
        int n,k; cin>>n>>k;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        int count=0;
        for(int i=0; i<n; i++){
            int var=abs(i+1-v[i]);
            if(var%k!=0)
                count++;
        }
        if(count==2)
            cout<<1<<endl;
        else if(count==0)
            cout<<0<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}


/*
    
*/
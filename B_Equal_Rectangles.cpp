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
        int n; cin>>n;
        vector<int> v(4*n);
        vector<int> hash(10000+2, 0);
        for(int i=0; i<4*n; i++)
            cin>>v[i], hash[v[i]]++;
        bool flag=true;
        for(int i=0; i<hash.size(); i++){
            if(hash[i]%2){
                cout<<"NO"<<endl;
                flag=false;
                break;
            }
        }
        if(flag){
            vector<int> va;
            for(int i=0; i<hash.size(); i++){
                if(hash[i]>0){
                    for(int j=0; j<hash[i]/2; j++)
                        va.pb(i);
                }
            }
            sort(all(va));
            flag=true;
            if(va.size()%2){
                cout<<"NO"<<endl;
                flag=false;
            }
            if(flag){
                int temp=va[0]*va[va.size()-1];
                int var=va.size()/2;
                flag=true;
                for(int i=1; i<var; i++){
                    if(va[i]*va[va.size()-1-i]!=temp){
                        cout<<"NO"<<endl;
                        flag=false;
                        break;
                    }
                }
                if(flag)
                    cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}


/*
   
*/
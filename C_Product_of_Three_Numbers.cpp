#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(n<24)
            cout<<"NO"<<endl;
        else{
            vector<int> sol(3);
            for(int i=0; i<2; i++){
                vector<int> div;
                for(int i=2; i*i<=n; i++){
                    if(n%i==0)
                        div.pb(i);
                }
                if(div.size()==0){
                    cout<<"NO"<<endl;
                    break;
                }
                else{
                    for(int j=0; j<div.size(); j++){
                        if(sol[0]!=div[j] && sol[1]!=div[j]){
                            sol[i]=div[j];
                            n/=div[j];
                            break;
                        }
                    }
                    if(i==1){
                        sol[2]=n;
                        if(sol[0]==sol[1] || sol[1]==sol[2] || sol[2]==sol[0] || sol[1]==0)
                            cout<<"NO"<<endl;
                        else{
                            cout<<"YES"<<endl;
                            for(int i=0; i<3; i++)
                                cout<<sol[i]<<" ";
                            cout<<endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
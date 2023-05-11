#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,x,y; cin>>n>>x>>y;
        vector<int> sol(n, INT_MAX);
        int diffxy=y-x;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int posx=i, posy=j, diffpos=posy-posx;
                if(diffxy%diffpos==0){
                    vector<int> temp(n);
                    for(int k=0; k<n; k++){
                        int var=x-((posx-k)*(diffxy/diffpos));
                        if(var>0)
                            temp[k]=var;
                    }
                    sort(temp.begin(), temp.end());
                    if(temp[n-1]<sol[n-1] && temp[0]!=0)
                        sol=temp;
                }
            }
        }
        for(int i=0; i<n; i++)
            cout<<sol[i]<<" ";
        cout<<endl;
    }
    return 0;
}
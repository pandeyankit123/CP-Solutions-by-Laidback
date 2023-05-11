#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int m; cin>>m;
        vector<vector<int>> v(m);
        vector<int> hash(50000+1, 0);
        for(int i=0; i<m; i++){
            int n; cin>>n;
            vector<int> nv(n);
            for(int j=0;j<n; j++){
                cin>>nv[j];
                hash[nv[j]]++;
            }
            v[i]=nv;
        }
        bool flag=true;
        vector<int> powin;
        for(int i=0; i<m; i++){
            flag=true;
            for(int j=0; j<v[i].size(); j++){
                if(flag){
                    if(hash[v[i][j]]==1){
                        powin.push_back(v[i][j]);
                        flag=false;
                    }
                }
                hash[v[i][j]]--;
            }
            if(flag) break;
        }
        if(flag)
            cout<<-1<<endl;
        else{
            for(int i=0; i<powin.size(); i++)
                cout<<powin[i]<<" ";
            cout<<endl;  
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m], out[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            out[i][j]=1;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cin>>arr[i][j];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==0){
                for (int z = 0; z < m; z++)
                    out[i][z]=0;
                for (int z = 0; z < n; z++)
                    out[z][j]=0;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==1){
                int sum=0;
                for (int z = 0; z < m; z++)
                    sum+=out[i][z];
                for (int z = 0; z < n; z++)
                    sum+=out[z][j];
                if(sum==0){
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cout<<out[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
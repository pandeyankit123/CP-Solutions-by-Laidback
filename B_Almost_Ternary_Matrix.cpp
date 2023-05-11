#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        int arr[n][m];
        arr[0][0]=1;
        for(int i=1; i<m; i++){
            if(i%2)
                arr[0][i]=1-arr[0][i-1];
            else
                arr[0][i]=arr[0][i-1];
        }
        for(int i=1; i<n; i++){
            for(int j=0; j<m; j++){
                if(i%2)
                    arr[i][j]=1-arr[i-1][j];
                else
                    arr[i][j]=arr[i-1][j];
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)
                cout<<arr[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
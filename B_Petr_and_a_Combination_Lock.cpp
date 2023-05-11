#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<(1<<n); i++){
        int sum=0;
        for(int j=0; j<n; j++){
            if((i&(1<<j))>0)
                sum+=arr[j];
            else
                sum-=arr[j];
        }
        if(sum==0 || sum%360==0){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
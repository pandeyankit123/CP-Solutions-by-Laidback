#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    int t;
    cin>>t;
    while (t--){
        int n,count=0;
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin>>arr[i];
        int age=0, piche=n-1;
        while(piche>=age){
            if (arr[piche]==0 && arr[age]==1)
            {
                arr[piche]=1;
                arr[age]=0;
                age++;
                piche--;
                count++;
            }
            else if (arr[piche]==0 && arr[age]==0)
                age++;
            else if (arr[piche]==1 && arr[age]==1)
                piche--;
            else
                piche--;
        }
        cout<<count<<endl;
    }  
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        ll arr[n];
        bool flag=true;
        for (int i = 0; i < n; i++){
            cin>>arr[i];
            for (int j = 0; j < i; j++){
                if(arr[i]==arr[j])
                    flag=false;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
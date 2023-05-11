#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        arr[0]=n/2;
        if(n%2!=0){
            arr[1]=n-1;
            for(int i=2; i<n-1; i++)
                arr[i]=arr[i-2]-1;
            arr[n-1]=n;
        }
        else{
            arr[1]=n;
            for(int i=2; i<n; i++)
                arr[i]=arr[i-2]-1;
        }
        for (int i = 0; i < n; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}

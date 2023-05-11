#include<bits/stdc++.h>
using namespace std;

int main(){
    int N = 1e5;
    int arr[N];
    for (int i = 0; i < N; i++)
    {   
        if(i>10){
            int sum=i/2, num=arr[i/2];
            arr[i]=num+5;
            if(i%2!=0)
                arr[i]++;
        }
        else
            arr[i]=i;
    }
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int n;
        cin>>n;
        cout<<"Case #"<<t<<" "<<arr[n]<<endl;
    }
    return 0;
}
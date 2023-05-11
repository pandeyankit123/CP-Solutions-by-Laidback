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
        if(n==5)
            cout<<"3 "<<"4 "<<"5 "<<"1 "<<"2"<<endl;
        else if(n!=1 && n!=3){
            for (int i = 0; i < n; i++)
                arr[i]=n-i;
            if(n%2!=0)
                swap(arr[(n/2)], arr[(n/2)+1]);
            for (int i = 0; i < n; i++)
                cout<<arr[i]<<" ";
            cout<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n];
        for (int i=0; i<n; i++)
        {cin>>arr[i];}
        bool ans=false;
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                if(arr[i]+arr[i+1]<=x)
                {swap(arr[i],arr[i+1]);}
                else
                { 
                    ans=true;
                    break;
                }
            }
        }
        if(ans==true)
        {cout<<"no"<<endl;}
        else
        {cout<<"yes"<<endl;}
    }
    return 0;
}
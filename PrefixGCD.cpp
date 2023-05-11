#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {cin>>arr[i];}
        int flag=1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i]!=__gcd(arr[i], arr[i-1]))
            {
                flag=0;
                break;
            }   
        }
        if (flag==1)
        {cout<<"YES"<<endl;}
        else
        {cout<<"NO"<<endl;}   
    }
    return 0;
}
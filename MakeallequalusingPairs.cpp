#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {cin>>arr[i];}
        
        map<int, int> cnt;
        int mx_cnt=0;
        for(auto i : arr)
        {
            cnt[i]++;
            mx_cnt=max(mx_cnt, cnt[i]);
        }
        cout<<(n-mx_cnt)<<endl;
    }
    return 0;
}
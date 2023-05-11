#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
 
int main(){
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        vector<pair<int, ll>> arr(n);
        int count0=0, count1=0;
        ll sum=0;
        for (int i = 0; i < n; i++)
        {
            int ele;
            cin>>ele;
            arr[i].first=ele;
        }
        vector<ll> zero, one;
        for (int i = 0; i < n; i++)
        {
            ll ele;
            cin>>ele;
            arr[i].second=ele;
            if (arr[i].first==0)
            {
                zero.pb(arr[i].second);
                count0++;
                sum+=arr[i].second;
            }
            else
            {
                one.pb(arr[i].second);
                count1++;
                sum+=arr[i].second;
            }
        }
        sort(zero.begin(), zero.end());
        sort(one.begin(), one.end());
        if (count0==count1)
        {
            sum*=2;
            sum-=min(zero[0],one[0]);
            cout<<sum<<endl;
        }
        else
        {
            int mini = min(count0, count1);
            for (int i = 0; i < mini; i++)
                sum+=one[count1-1-i]+zero[count0-1-i];
            cout<<sum<<endl;
        }
    }
    return 0;
}
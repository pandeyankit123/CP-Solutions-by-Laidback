#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        ll ans1, ans2;
        if (m<2*n)
        {cout<<m<<" "<<m<<endl;}
        else if (m%n==0)
        {cout<<m<<" "<<n<<endl;}
        else
        {
            ll x= m/2;
            if (m>=2*n)
            {x=2*n;}
            long diff = INT_MIN;    
            for (int i = n; i < x; i++)
            {
                ll d=m/i;
                ll cd= (i*d)-i;
                if(cd>diff)
                {
                    ans1=i;
                    ans2=i*d;
                    diff=cd;
                }
            }
            printf("%d %d\n", ans1, ans2);
        }
    }
    return 0; 
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {cin>>v[i];}
        vector<int> prefixGCD(n);
        prefixGCD[0]=v[0];
        for(int i=1; i<n; i++)
        {prefixGCD[i]= __gcd(prefixGCD[i-1],v[i]);}
        vector<int> suffixGCD(n);
        suffixGCD[n-1]= v[n-1];
        for(int i=n-2; i>=0; i--)
        {suffixGCD[i]= __gcd(suffixGCD[i+1], v[i]);}
        int strongelements=0;
        for(int i=0; i<n; i++)
        {
            if(i==0 && suffixGCD[i]>1)
            {strongelements++;}
            else if(i==n-1 && prefixGCD[n-2]>1)
            {strongelements++;}
            else if(__gcd(prefixGCD[i-1], suffixGCD[i+1])>1)
            {strongelements++;}
        }
        cout<<strongelements<<endl;
    }
    return 0;
}
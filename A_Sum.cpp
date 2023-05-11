#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,c,s1,s2,s3;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>c;
        s1=a+b;
        s2=b+c;
        s3=a+c;
        if (s1==c ||s2==a || s3==b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
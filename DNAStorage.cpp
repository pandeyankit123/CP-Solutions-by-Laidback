#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string code;
        cin>>code;
        for(int i=0;i<n;i+=2)
        {
            if(code[i]=='0' && code[i+1]=='0')
            {cout<<"A";}
            if(code[i]=='0' && code[i+1]=='1')
            {cout<<"T";}
            if(code[i]=='1' && code[i+1]=='0')
            {cout<<"C";}
            if(code[i]=='1' && code[i+1]=='1')
            {cout<<"G";}
        }
        cout<<endl;
    }
    return 0;
}
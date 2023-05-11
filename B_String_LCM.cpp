#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int n1=s1.length(), n2=s2.length();
        int lcm=(n1*n2)/__gcd(n1,n2);
        string r1="", r2="";
        for(int i=0; i<lcm/n1;i++)
            r1+=s1;
        for(int i=0; i<lcm/n2;i++)
            r2+=s2;
        if(r1==r2)
            cout<<r1<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
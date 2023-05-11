#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    int n;
    cin>>n;
    string str;
    while(n>0 && n%7!=0){
        n-=4;
        str.pb('4');
    }
    while (n>0 && n%7==0){
        n-=7;
        str.pb('7');
    }
    if(n==0)
        cout<<str;
    else
        cout<<"-1";
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    string str2=str;
    reverse(str.begin(), str.end());
    str2=str2+str;
    cout<<str2;
    return 0;
}
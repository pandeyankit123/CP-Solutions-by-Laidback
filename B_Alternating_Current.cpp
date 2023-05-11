#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char> sk;
    sk.push(s[0]);
    for(int i=1; i<s.length(); i++){
        if(!sk.empty()){
            if(sk.top()==s[i])
                sk.pop();
            else
                sk.push(s[i]);
        }
        else
            sk.push(s[i]);
    }
    if(sk.empty())
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
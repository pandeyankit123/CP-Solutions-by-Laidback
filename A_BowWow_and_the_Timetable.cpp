#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int count=(str.length()+1)/2;
    int count1=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='1')
            count1++;
    }
    if(count1==1 && str.length()%2==1)
        count--;
    else if(count1==0)
        count=0;
    cout<<count;
    return 0;
}
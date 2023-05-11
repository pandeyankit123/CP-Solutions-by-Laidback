#include<bits/stdc++.h>
using namespace std;

int ret(int a, int b){
    if(a%b)
        return a/b +1;
    return a/b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int cpp=n/k, jr=m-cpp;
        if(jr<0)
            jr=0;
        if(jr==0)
            cout<<m<<endl;
        else{
            int cjopr=ret(jr,k-1);
            cout<<cpp-cjopr<<endl;
        }
    }
    return 0;
}
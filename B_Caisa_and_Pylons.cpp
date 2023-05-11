#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,prev=0,res=0,eng=0;
    cin>>n;
    while(n--){
        cin>>x;
        eng+=prev-x;
        if(eng<0){
            res-=eng;
            eng=0;
        }
        prev=x;
    }
    cout<<res;
    return 0;
}
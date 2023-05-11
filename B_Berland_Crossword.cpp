#include<bits/stdc++.h>
using namespace std;

void check(int i, vector<int> &v){
    int left=i-1, right=i+1;
    if(right==5) right=1;
    if(left==0) left=4;
    if(v[i]==v[0]-1){
        if(v[left]>v[right]) v[left]--;
        else v[right]--;
    }
    if(v[i]==v[0]){
        v[left]--;
        v[right]--;
    }
}

int main(){
    int t; cin>>t;
    while (t--){
        vector<int> v(5), dv(5);
        for(int i=0; i<5; i++) cin>>v[i];
        for(int i=0; i<5; i++) dv[i]=v[i];
        if(v[1]<=v[0]-2 && v[2]<=v[0]-2 && v[3]<=v[0]-2 && v[4]<=v[0]-2)
            cout<<"YES"<<endl;
        else{
            check(1, v);
            check(3, v);
            if(v[2]<0 || v[4]<0){
                cout<<"NO"<<endl;
                continue;
            }
            check(2, dv);
            check(4, dv);
            if(dv[1]<0 || dv[3]<0){
                cout<<"NO"<<endl;
                continue;
            }
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
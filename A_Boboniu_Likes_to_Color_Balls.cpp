#include<bits/stdc++.h>
using namespace std;
#define ll long long

int countodd(ll arr[]){
    int count=0;
    for(int i=0; i<4; i++){
        if(arr[i]%2)
            count++;
    }
    return count;
}

int countzero(ll arr[]){
    int count=0;
    for(int i=0; i<3; i++){
        if(arr[i]==0)
            count++;    
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll arr[4];
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
        if(countodd(arr)==2 || (countodd(arr)==3 && countzero(arr)!=0))
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}
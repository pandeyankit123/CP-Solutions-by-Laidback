#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll b,c;
    cin>>c>>b;
    if(b%c==0){
        ll rem=b/c,count=0;
        if(rem%2==0 || rem==1){
            while(rem%6==0){
                rem=rem/6;
                count+=2;
            }
            while (rem%2==0){
                rem=rem/2;
                count++;
            }
            while (rem%3==0){
                rem=rem/3;
                count++;
            }
            cout<<count<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
    else
        cout<<"-1"<<endl;
    return 0;
}
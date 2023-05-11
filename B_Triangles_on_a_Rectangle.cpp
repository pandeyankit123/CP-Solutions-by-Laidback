#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll w,h,k,p,first,last,area=0;
        cin>>w>>h;
        for(int i=0; i<4; i++){
            cin>>k;
            for(int j=0; j<k; j++){
                cin>>p;
                if(j==0) first=p;
                else if(j+1==k) last=p;
            }
            ll base = last-first;
            if(i<2) area=max(area, base*h);
            else area=max(area,base*w);
        }
        cout<<area<<endl;
    }
    return 0;
} 
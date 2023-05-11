#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> xm;
    int i=1;
    while ((i*m)<=n){
        xm.pb(i*m);
        i++;
    }
    if(n<m){
        cout<<"-1"<<endl;
    }
    else if(n==m){
        cout<<n<<endl;
    }
    else{
        for (int i = 0; i < xm.size(); i++){
            int a,b;
            a=n-xm[i];
            b=(2*xm[i])-n;
            if(a>=0 && b>=0){
                cout<<xm[i]<<endl;
                return 0;
            }
        }
    }
    return 0;
}/*
10 3
3
2 2 2 2 1 1
15 3
9
2 2 2 2 2 2 1 1 1
2a+b=n;
a+b=xm
a=n-xm;
b=2xm-n;
*/
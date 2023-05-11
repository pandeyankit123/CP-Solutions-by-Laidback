#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int gcd=pow(10,c-1);
        int x=gcd,y=gcd;
        while(to_string(x).length()<a)
            x*=2;
        while(to_string(y).length()<b)
            y*=3;
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
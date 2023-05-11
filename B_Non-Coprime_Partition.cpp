#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    int n;
    cin>>n;
    if(n<3)
        cout<<"No";
    else{
        cout<<"Yes"<<endl;
        cout<<n-1;
        for(int i=1; i<=n-1; i++)
            cout<<" "<<i;
        cout<<endl;
        cout<<"1"<<" "<<n;
    }
    return 0;
}
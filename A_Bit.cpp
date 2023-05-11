#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> v(n);
    int x=0;
    for (int i = 0; i < n; i++){
        cin>>v[i];
        if(v[i][1]=='+')
            x++;
        if(v[i][1]=='-')
            x--;
    }
    cout<<x<<endl;
    return 0;
}
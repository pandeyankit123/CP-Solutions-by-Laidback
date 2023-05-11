#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    vector<int> hash(k,0);
    int petti=n/2,count=0;
    if(n%2)
        petti++;
    for(int i=0; i<n; i++){
        cin>>v[i];
        hash[v[i]-1]++;
    }
    for(int i=0; i<k; i++){
        petti-=hash[i]/2;
        if(hash[i]%2)
            count++;
    }
    cout<<n-(count-petti);
    return 0;
}
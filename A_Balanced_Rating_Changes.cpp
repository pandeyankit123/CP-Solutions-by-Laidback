#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int countodd=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]%2)
            countodd++;
    }
    countodd/=2;
    int countodd2=countodd;
    for(int i=0; i<n; i++){
        if(v[i]%2){
            if(countodd>0){
                    v[i]++;
                countodd--;    
            }
        }
    }
    for(int i=n-1; i>=0; i--){
        if(v[i]%2){
            if(countodd2>0){
                    v[i]--;
                countodd2--;    
            }
        }
    }
    for(int i=0; i<n; i++)
        cout<<v[i]/2<<endl;
    return 0;
}
/*
-7 -29 0 3 24 -29 38

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int c,sum;
        cin>>c>>sum;
        vector<int> v(c,0);
        while(sum){
            for(int i=0; i<c; i++){
                v[i]++; sum--;
                if(sum==0)
                    break;
            }
        }
        int sumout=0;
        for(int i=0; i<c; i++)
            sumout+=v[i]*v[i];
        cout<<sumout<<endl;
    }
    return 0;
}
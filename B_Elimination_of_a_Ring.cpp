#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        bool flag=true;
        for (int i = 0; i < n; i++){
            if(i==0){
                if(v[i+1]!=v[n-1])
                    flag=false;
            }
            else if(i==n-1){
                if(v[i-1]!=v[0])
                    flag=false;
            }
            else{
                if(v[i-1]!=v[i+1])
                    flag=false;
            }
        }
        if(flag)
            cout<<(n/2)+1<<endl;
        else
            cout<<n<<endl;
    }
    return 0;
}
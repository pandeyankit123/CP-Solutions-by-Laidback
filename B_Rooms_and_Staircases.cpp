#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string str;
        cin>>n>>str;
        if(str[0]=='1' || str[n-1]=='1')
            cout<<(2*n)<<endl;
        else{
            int count=0;
            for(int i=0; i<n; i++){
                if(str[i]=='1')
                    count++;
            }
            if(count==0)
                cout<<n<<endl;
            else if(count>0){
                int lo=0,hi=0;
                for (int i = 1; i < n-1; i++){
                    if(str[i]=='1'){
                        lo=i;
                        break;
                    }
                }
                for (int i = n-2; i > 0; i--){
                    if(str[i]=='1'){
                        hi=i;
                        break;
                    }
                }
                if(lo!=hi){
                    if(lo<=n/2 || hi>=n/2){
                        int x=max((n-lo), hi+1);
                        cout<<2*x<<endl;
                    }
                }
                else if(lo==hi){
                    if(lo<=n/2){
                        cout<<2*(n-lo)<<endl;
                    }
                    else if(lo>n/2){
                        cout<<2*(lo+1)<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
/*
01010
01000
00010
00100 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char> arr(n);
        int cntq=0;
        for (int i = 0; i < n; i++){
            cin>>arr[i];
            if(arr[i]=='q' || arr[i]=='Q')
                cntq++;
        }
        int sum=0;
        if(*arr.end()!='q' || *arr.end()!='Q'){
            for (int i = 0; i < arr.size(); i++){
                if(arr[i]=='Q' || arr[i]=='q'){
                    for (int j = i+1; j < arr.size(); j++){
                        if(arr[j]=='a' || arr[j]=='A'){
                            sum++;
                            arr[j]='z';
                            break;
                        }
                   }
                }
            }
        }
        if(sum==cntq)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
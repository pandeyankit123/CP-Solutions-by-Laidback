#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    char alph[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int t;
    cin>>t;
    while(t--){
        int n;
        string str;
        cin>>n>>str;
        vector<int> val;
        int arr[n];
        for(int i=0;i<n;i++){
            if((str[i]-48)==0){
                if((str[i+1]-48)==0)
                    val.pb((str[i]-48));
                else{
                    val.pop_back(); val.pop_back();
                    val.pb(((str[i-2]-48)*10)+(str[i-1]-48));
                }
            }
            else
                val.pb((str[i]-48));
        }
        for(int i=0; i<val.size(); i++)
            cout<<alph[val[i]-1];
        cout<<endl;
    }
    return 0;
}
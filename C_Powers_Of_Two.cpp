#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin>>n>>k;
    int cnt=0;
    multiset<int>ms;
    for(int i=0;i<32;i++){
        if((1<<i)&n){
            cnt++;
            ms.insert((1<<i));
        }
    }
    if(k<cnt || k>n)
        cout<<"NO"<<endl;
    else{
        while(ms.size()<k && *(--ms.end())!=1){
            auto it=ms.end();
            it--;
            int x = *it;
            ms.erase(it);
            ms.insert(x/2);
            ms.insert(x/2);
        }
        cout<<"YES"<<endl;
        for(auto z:ms)
            cout<<z<<" ";
    }
    return 0;
}

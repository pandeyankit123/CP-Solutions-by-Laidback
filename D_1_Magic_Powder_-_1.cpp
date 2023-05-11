#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
        cin>>b[i];
    int high=1e5+1,low=0;
    int ans;
    while(low<=high){
        int mid=(high+low)/2;
        int rgok=0;
        for(int i=0; i<n; i++){
            int val=0;
            val=(mid*a[i])-b[i];
            if(val<0)
                val=0;
            rgok+=val;
        }
        if(rgok<=k)
            low=mid+1;
        else{
            ans=mid;
            high=mid-1;
        }
    }
    cout<<ans-1;
    return 0;
}
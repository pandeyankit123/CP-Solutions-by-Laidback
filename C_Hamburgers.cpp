#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string str;
    int nb,ns,nc,pb,ps,pc,cb=0,cs=0,cc=0;
    ll r,ans;
    cin>>str>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='B')
            cb++;
        else if(str[i]=='S')
            cs++;
        else if(str[i]=='C')
            cc++;
    }
    ll high=1e15+1,low=0;
    while(low<=high){
        ll mid=(high+low)/2;
        ll rbb=(mid*cb)-nb,rsb=(mid*cs)-ns,rcb=(mid*cc)-nc;
        if(rbb<0)
            rbb=0;
        if(rsb<0)
            rsb=0;
        if(rcb<0)
            rcb=0;
        ll rm=(rbb*pb)+(rsb*ps)+(rcb*pc);
        if(rm<=r)
            low=mid+1;
        else {
            ans=mid;
            high=mid-1;
        }
    }
    cout<<ans-1;
    return 0;
}
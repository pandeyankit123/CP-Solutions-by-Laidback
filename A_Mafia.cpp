#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define po pop_back
#define all(v) v.begin(),v.end()

int main(){
    int n; cin>>n;
    vector<int> v(n);
    ll sum=0;
    for(int i=0; i<n; i++)
        cin>>v[i], sum+=v[i];
    ll ans=sum/(n-1);
    if(sum%(n-1)!=0)
        ans++;
    int var=*max_element(all(v));
    if(ans<var)
        ans=var;
    cout<<ans;
    return 0;
}


/*

*/


/*  Waadon se apne mukarta nahin,           */
/*  Question se main kabhi darta nahin.     */
/*  Laidback O Laidback!                    */
/*  Laidback O Laidback!                    */
/*  Laidback O Laidback!                    */
/*  Laidback...                             */
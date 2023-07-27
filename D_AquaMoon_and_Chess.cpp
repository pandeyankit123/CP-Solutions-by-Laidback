/*  Waadon se apne mukarta nahin,          */
/*  Question se main kabhi darta nahin.    */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback...                            */


#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define coutall(v) for(int i=0; i<v.size(); i++) cout<<v[i]<<" "; cout<<endl;
#define cinall(v) for(int i=0; i<v.size(); i++) cin>>v[i];
#define all(v) v.begin(),v.end()
#define newl cout<<endl;
#define ll long long
#define pb push_back
#define po pop_back
#define ss second
#define ff first

const ll MOD=998244353;
const int N=1e5+7;

ll pow(ll a,ll b){
	ll ans=1;
	while(b){
		if(b&1) ans=(ans*a)%MOD;
		a=a*a%MOD;
		b>>=1;
	}
	return ans;
}
  
ll nCr(ll a,ll b){
	if(a==b) return 1;
	if(a<b) return 0;
	if(b>a-b) b=a-b;
	ll fa=1,fb=1;
	for(int i=0;i<b;i++){
		fa=(fa*(a-i))%MOD;
		fb=(fb*(b-i))%MOD;
	}
	return fa*pow(fb,MOD-2)%MOD;
}

int main(){
    fastIO;
    int t; cin>>t;
    // int t=1;
    while(t--){
        int n; cin>>n;
        string str; cin>>str;
        int count=0, cnt=0, c0=0;
        for(int i=0; i<n; i++){
            if(str[i]=='1'){
                cnt++;
                if(cnt==2)
                    count++, cnt=0;
            }
            else cnt=0, c0++;
        }
        // cout<<c0<<" "<<count<<endl;
        ll ans=nCr((count+c0), c0);
        cout<<ans<<endl;
    }
    return 0;
}


/*
    
*/
  
 
 
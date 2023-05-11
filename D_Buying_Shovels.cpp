#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        if(n<=k)
			cout<<1<<endl;
		else if(k==1)
			cout<<n<<endl;
		else{
			vector<ll> fact;
			for(int i=1; i*i<=n; i++){
				if(n%i==0){
					if(n/i==i && i<=k)
						fact.push_back(i);
					else{
						if(i<=k)
							fact.push_back(i);
						if (n/i<= k)
							fact.push_back(n/i);
					}
				}
			}
			int ans= INT_MAX;
			for(int i=0; i<fact.size(); i++){
				if(n%fact[i]==0){
					if((n/fact[i])<ans)
						ans=n/fact[i];
				}
			}
			cout << ans << "\n";
		}
	}
    return 0;
}
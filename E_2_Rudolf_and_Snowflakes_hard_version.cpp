#include<bits/stdc++.h>
using namespace std;
map<long long,bool> mp;
int main()
{
	for(int i=2;i<=1000000;i++)
	{
		__int128 x=i,sum=i+1;
		while(1)
		{
			x*=i;
			if(x>1e18) break;
			sum+=x;
			mp[sum]=1;
		}
	}
	int t;
	cin>>t;
	while(t--)
	{
		long long x;
		cin>>x;
		if(mp[x]==1) puts("YES");
		else
		{
			long long y=sqrt(x-1);
			if(1ll*y*y+y+1==x&&y>=2) puts("YES");
			else puts("NO");
		}
	}
	return 0;
}
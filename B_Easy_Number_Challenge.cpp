#include<bits/stdc++.h>
using namespace std;

#define all(v) v.begin(),v.end()
#define ll long long
#define pb push_back
#define po pop_back
#define b() begin()
#define e() end()
#define s second
#define f first

const int MOD=1073741824;
const int N=1e6+5;  
int arr[N];    

ll d(ll var){
	if(arr[var]!=0)
		return arr[var];
	for(int i=1; i*i<=var; i++){
		if(var%i==0){
			if(i*i!=var)
				arr[var]++;
			arr[var]++;
		}
	}
	return arr[var];
}

int main(){
    int a,b,c; cin>>a>>b>>c;
	ll ans=0;
	for(int i=1; i<=a; i++)
		for(int j=1; j<=b; j++)
			for(int k=1; k<=c; k++)
				ans+=d(i*j*k);
	cout<<ans%MOD;
    return 0;
}


/*
    
*/


/*  Waadon se apne mukarta nahin,          */
/*  Question se main kabhi darta nahin.    */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback...                            */
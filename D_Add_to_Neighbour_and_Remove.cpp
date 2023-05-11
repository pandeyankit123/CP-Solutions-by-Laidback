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

const int MOD=1e7+10;
const int N=1e7+10;

bool ispos(int x, int n, int sum, vector<int> v){
	x=n-x;
	if(sum%x!=0) return false;
	const int val=sum/x;
	int curr=0;
	for(int i=0; i<n; i++){
		curr+=v[i];
		if(curr==val)
			curr=0;
		else if(curr>val) return false;
	}
	return curr==0;
}

int main(){
    fastIO;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        int sum=0;
        for(int i=0; i<v.size(); i++) cin>>v[i], sum+=v[i];
        bool flag=true;
        int i=0;
        while(flag){
            if(ispos(i, n, sum, v))
                cout<<i<<endl, flag=false;
            i++;
        }
    }
    return 0;
}


/*
    
*/
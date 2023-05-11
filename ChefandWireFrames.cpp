#include <iostream>
using namespace std;

int main() {
	int t,n,m,x;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>n>>m>>x;
	    cout<<(2*(n+m))*x<<endl;
	}
	return 0;
}

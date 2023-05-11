#include <iostream>
using namespace std;

int main() {
	int t,w,x,y,z;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>w>>x>>y>>z;
	    cout<<w+(z*(x-y))<<endl;
	}
	return 0;
}

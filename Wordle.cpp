#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){
	    char a1[5];
	    char  a2[5];
	    for(int j=0;j<5;j++){
	        cin>>a1[j];
	    }
	    for(int k=0;k<5;k++){
	        cin>>a2[k];
	    }
	    for(int i=0;i<5;i++){
	        if(a1[i]==a2[i]){
	            cout<<"G";
	        }else{
	            cout<<"B";
	        }
	    }cout<<endl;
	}
	return 0;
}
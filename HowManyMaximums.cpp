#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n;
cin>>t;
for(int i; i<t; i++){
  cin>>n;
  string str;
  cin>>str;
  if(n==1){cout<<"1"<<endl;}
  else {
   int sum=0;
 
  for(int i=1;i<n-1;i++){
    if(str[i]=='1' && str[i-1]=='0'){
      sum++;
    }
  }
   if(str[0]=='1') {
    sum++;
  }
  if (str[n-2]=='0'){
      sum++;
  }
      cout<<sum<<endl;}
} 
return 0;
}   
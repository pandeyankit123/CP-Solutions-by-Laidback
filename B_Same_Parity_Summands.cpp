/*  Waadon se apne mukarta nahin,          */
/*  Question se main kabhi darta nahin.    */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback...                            */


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

int main(){
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        if(k>n)
            cout<<"NO"<<endl;
        else{
            if(n%2){
                if(k%2){
                    cout<<"YES"<<endl;
                    for(int i=0; i<k-1; i++)
                        cout<<1<<" ", n--;
                    cout<<n<<endl;
                }
                else cout<<"NO"<<endl;
            }
            else{
                if(k%2){
                    if(k>n/2)
                        cout<<"NO"<<endl;
                    else{
                        cout<<"YES"<<endl;
                        for(int i=0; i<k-1; i++)
                            cout<<2<<" ", n-=2;
                        cout<<n<<endl;
                    }
                }
                else{
                    if(k>n/2){
                        cout<<"YES"<<endl;
                        for(int i=0; i<k-1; i++)
                            cout<<1<<" ", n--;
                        cout<<n<<endl;
                    }
                    else{
                        cout<<"YES"<<endl;
                        for(int i=0; i<k-1; i++)
                                cout<<2<<" ", n-=2;
                            cout<<n<<endl;
                    }
                }
            }
        }
    }
    return 0;
}


/*
    
*/
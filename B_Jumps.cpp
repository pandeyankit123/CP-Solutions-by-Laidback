#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define po pop_back
#define all(v) v.begin(),v.end()

int main(){
    int t; cin>>t;
    while(t--){
        int x; cin>>x;
        int count=0, steps=0;
        for(int i=1; i<=x; i++){
            count+=i, steps++;
            if(count>=x)
                break;
        }
        int diff=count-x;
        if(diff==1)
            cout<<steps+1<<endl;
        else cout<<steps<<endl;
    }
    return 0;
}


/*
    
*/


/*  Waadon se apne mukarta nahin,    */
/*  Marne se main kabhi darta nahin. */
/*  Laidback O Laidback!             */
/*  Laidback O Laidback!             */
/*  Laidback O Laidback!             */
/*  Laidback...                      */
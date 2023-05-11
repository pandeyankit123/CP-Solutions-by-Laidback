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

bool ispossible(int k, int n, int sum){
    int min=k*(k+1)/2;
    int max=k*((2*n)-k+1)/2;
    if(sum<min || sum>max)
        return false;
    return true;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,l,r,sum; cin>>n>>l>>r>>sum;
        int k=r-l+1;
        if(!ispossible(k, n, sum))
            cout<<-1<<endl;
        else{
            vector<int> var;
            for(int i=n; i>=1; i--){
                if(sum-i>=0 && ispossible(k-1, i-1, sum-i))
                    sum=sum-i, k--, var.pb(i);
                if(sum==0)
                break;
            }
            if(sum!=0)
                cout<<-1<<endl;
            else{
                vector<int> hash(n+2, 0);
                vector<int> sol(n);
                int dl=l;
                for(int i=0; i<var.size(); i++)
                    sol[dl-1]=var[i], dl++, hash[var[i]]++;
                int i=0, j=1;
                while(i<n){
                    if(i<(l-1) || i>(r-1)){
                        if(hash[j]==0)
                            sol[i]=j, j++, i++;
                        else j++;
                    }
                    else i++;
                }
                for(int i=0; i<n; i++)
                    cout<<sol[i]<<" ";
                cout<<endl; 
            }  
        }
    }
    return 0;
}


/*

*/
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

bool compare(pair<int, int> i, pair<int, int> j){
  return i.second < j.second;
}

int main(){
    fastIO;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        map<int, int> hash;
        vector<int> v(n); 
        for(int i=0; i<v.size(); i++) 
            cin>>v[i], hash[v[i]]++;
        pair<int, int> min = *min_element(all(hash), compare);
        int ans=INT_MAX;
        for(int s=min.ss+1; s>0; s--){
            int var=0;
            for(auto it : hash){
                if(it.ss%s==0 || (s-(it.ss%s))<=(it.ss/s)+1)
                    var+=it.ss%s?(it.ss/s)+1:it.ss/s;
                else{
                    var=0;
                    break;
                }
            }
            if(var!=0){
                if(var<=ans)
                    ans=var;
                else break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}


/*

*/
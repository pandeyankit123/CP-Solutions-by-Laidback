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
const int N=1e3+10;

int main(){
    fastIO;
    // int t; cin>>t;
    int t=1;
    while(t--){
        int n; cin>>n;
        map<int, int> hash, hash1;
        vector<int> v(n*n); 
        for(int i=0; i<n*n; i++)
            cin>>v[i], hash[v[i]]++;
        int val=-1;
        for(auto &it:hash){
            if(n%2){
                if((it.ss-1)%4==0){
                    if(val==-1)
                        val=it.ff;
                    else{
                        cout<<"NO";
                        return 0;
                    }
                }
                if((it.ss-3)%4==0){
                    if(val==-1){
                        val=it.ff;
                        hash1[val]=2;
                        it.ss-=2;
                    }
                    else{
                        cout<<"NO";
                        return 0;
                    }
                }
                if((it.ss-2)%4==0){
                    hash1[it.ff]=2;
                    it.ss-=2;
                }
            }
            else{
                if(it.ss%4){
                    cout<<"NO";
                    return 0;
                }
            }
        }
        int arr[n][n];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                arr[i][j]=0;
        if(n%2)
            arr[n/2][n/2]=val, hash[val]--;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(n%2)
                    if(i==n/2 || j==n/2)
                        continue;
                int var=(*hash.begin()).ff;
                if(arr[i][j]==0)
                    if((*hash.begin()).ss)
                        arr[i][j]=var, (*hash.begin()).ss--;
                if(arr[i][n-1-j]==0)
                    if((*hash.begin()).ss)
                        arr[i][n-1-j]=var, (*hash.begin()).ss--;
                if(arr[n-1-i][j]==0)
                    if((*hash.begin()).ss)
                    arr[n-1-i][j]=var, (*hash.begin()).ss--;
                if(arr[n-1-i][n-1-j]==0)
                    if((*hash.begin()).ss)
                        arr[n-1-i][n-1-j]=var, (*hash.begin()).ss--;
                if((*hash.begin()).ss==0)
                    hash.erase(hash.begin());
            }
        }
        if(n%2){
            for(int i=0; i<n; i++){
                if(!hash1.empty()){
                    int var=((*hash1.begin()).ff);
                    if(arr[n/2][i]==0)
                        if((*hash1.begin()).ss)
                            arr[n/2][i]=var, (*hash1.begin()).ss--;
                    if(arr[n/2][n-1-i]==0)
                        if((*hash1.begin()).ss)
                            arr[n/2][n-1-i]=var, (*hash1.begin()).ss--;
                    if((*hash1.begin()).ss==0)
                        hash1.erase(hash1.begin());
                }
                else break;
            }
            for(int i=0; i<n; i++){
                if(!hash1.empty()){
                    int var=(*hash1.begin()).ff;
                    if(arr[i][n/2]==0)
                        if((*hash1.begin()).ss)
                            arr[i][n/2]=var, (*hash1.begin()).ss--;
                    if(arr[n-1-i][n/2]==0)
                        if((*hash1.begin()).ss)
                            arr[n-1-i][n/2]=var, (*hash1.begin()).ss--;
                    if((*hash1.begin()).ss==0)
                        hash1.erase(hash1.begin());
                }
                else break;
            }
            if(!hash1.empty()){
                cout<<"NO";
                return 0;
            }
            for(int i=0; i<n; i++){
                if(!hash.empty()){
                    int var=((*hash.begin()).ff);
                    if(arr[n/2][i]==0)
                        if((*hash.begin()).ss)
                            arr[n/2][i]=var, (*hash.begin()).ss--;
                    if(arr[n/2][n-1-i]==0)
                        if((*hash.begin()).ss)
                            arr[n/2][n-1-i]=var, (*hash.begin()).ss--;
                    if((*hash.begin()).ss==0)
                        hash.erase(hash.begin());
                }
                else break;
            }
            for(int i=0; i<n; i++){
                if(!hash.empty()){
                    int var=(*hash.begin()).ff;
                    if(arr[i][n/2]==0)
                        if((*hash.begin()).ss)
                            arr[i][n/2]=var, (*hash.begin()).ss--;
                    if(arr[n-1-i][n/2]==0)
                        if((*hash.begin()).ss)
                            arr[n-1-i][n/2]=var, (*hash.begin()).ss--;
                    if((*hash.begin()).ss==0)
                        hash.erase(hash.begin());
                }
                else break;
            }
        }
        if(!hash.empty()){
            cout<<"NO";
            return 0;
        }
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
                cout<<arr[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}


/*

*/
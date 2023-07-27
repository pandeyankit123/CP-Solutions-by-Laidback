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

int main(){
    fastIO;
    // int t; cin>>t;
    int t=1;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        cinall(v);
        int mn=*min_element(all(v)), mx=*max_element(all(v));
        if(mx-mn<=1){
            cout<<n<<endl;
            coutall(v);
        }
        else{
            int mnc=0, mxc=0, midc=0;
            for(int i=0; i<n; i++){
                if(v[i]==mn) mnc++;
                else if(v[i]==mx) mxc++;
                else midc++;
            }
            int rminmax=min(mnc, mxc);
            int rmid=midc/2;
            int mnci, mxci, midci;
            if(rminmax>=rmid){
                mnci=mnc-rminmax;
                mxci=mxc-rminmax;
                midci=midc+2*rminmax;
            }
            else{
                mnci=mnc+rmid;
                mxci=mxc+rmid;
                midci=midc-2*rmid;
            }
            int common=min(mnc, mnci)+min(mxc, mxci)+min(midc, midci);
            cout<<common<<endl;
            for(int i=0; i<mnci; i++)
                cout<<mn<<" ";
            for(int i=0; i<mxci; i++)
                cout<<mx<<" ";
            for(int i=0; i<midci; i++)
                cout<<mn+1<<" ";
        }
    }
    return 0;
}


/*
    
*/
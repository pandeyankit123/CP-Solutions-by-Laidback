#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    int t;
    cin>>t;
    while (t--){   
        int n, q, counte=0, counto=0;
        cin>>n>>q; 
        vector<int> a(n);
        ll sum=0;
        for (int i = 0; i < n; i++){   
            ll ele;
            cin>>ele;
            a.pb(ele);
            if (ele%2==0)
                counte++;
            else
                counto++;
            sum+=ele;
        }
        for (int i = 0; i < q; i++){
            int type, x;
            cin>>type>>x;
            if (type==0){
                if (x%2==0){
                    sum+=x*counte;
                    cout<<sum<<endl;
                }
                else{
                    sum+=x*counte;
                    cout<<sum<<endl;
                    counto+=counte;
                    counte=0;
                }
            }
            else{
                if (x%2==0){
                    sum+=x*counto;
                    cout<<sum<<endl;
                }
                else{
                    sum+=x*counto;
                    cout<<sum<<endl;
                    counte+=counto;
                    counto=0;
                }
            }
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define pb push_back


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int x=n,y=n;
        vector<pair<int, int>> cord(m);
        for (int i = 0; i < m; i++)
        {
            int xc,yc;
            cin>>xc>>yc;
            cord.pb({xc,yc});
            x--; y--;
        }
        if(x>0 && y>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
        int k;
        string s;
        cin>>k>>s;
        unordered_map<char, int> variable;
        for (int i = 0; i < s.length(); i++){
            variable[s[i]]++;
        }
        vector<pair<char, int>> use;
        for (auto &it: variable){
            if((it.second%k)!=0){
                cout<<"-1"<<endl;
                return 0;
            }
            else
                use.pb({it.first,(it.second)/k});
        }
        vector<char> output;
        for (int i = 0; i < k; i++){
            for (auto &it : use){
                int val=it.second;
                while(val--)
                    output.pb(it.first);
            }
        }
        for (auto &jt : output)
            cout<<jt; 
        cout<<endl;
    return 0;
}
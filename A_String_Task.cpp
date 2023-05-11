#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    string line;
    cin>>line;
    vector<char> result;
    for (int i = 0; i < line.length(); i++)
    {
        if(line[i]!='A' && line[i]!='E' && line[i]!='I' && line[i]!='O' && line[i]!='U' && line[i]!='Y' && line[i]!='a' && line[i]!='e' && line[i]!='i' && line[i]!='o' && line[i]!='u' && line[i]!='y'){
            if(int(line[i])<97)
                line[i]+=32;
            result.pb('.');
            result.pb(line[i]);
        }
    }
    for (auto &it : result)
        cout<<it;
    return 0;
}       
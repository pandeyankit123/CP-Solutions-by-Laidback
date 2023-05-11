#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<string> st;
    while(n--){
        string cmd; cin>>cmd;
        if(cmd=="cd"){
            string str; cin>>str;
            vector<string> v;
            int i=0;
            if(str[0]=='/'){
                i++;
                st.clear();
            }
            string s="";
            while(i<str.length()){
                if(str[i]!='/')
                    s+=str[i];
                else{
                    v.push_back(s);
                    s="";
                }
                i++;
            }
            v.push_back(s);
            for(int i=0; i<v.size(); i++){
                if(v[i]=="..")
                    st.pop_back();
                else
                    st.push_back(v[i]);
            }
        }
        else{
            string out="/";
            for(int i=0; i<st.size(); i++)
                    out+=st[i]+'/';
            cout<<out<<endl;
        }
    }
    return 0;
}
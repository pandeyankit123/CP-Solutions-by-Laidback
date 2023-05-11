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

void fill(int n, int m, int k, vector<string> &v){
    int itr=0, ii=0, jj=-2;
    for(int i=0; i<n; i+=2){
        if(itr==k/2)
            break;
        char up='a', down='z';
        for(int j=0; j<m; j+=2){
            if(itr==k/2)
                break;
            v[i]+=up; v[i]+=up;
            v[i+1]+=down; v[i+1]+=down;
            if(up=='z' && down=='a')
                up='a', down='z';
            else up++, down--;
            itr++;
            jj=j;
        }
        ii=i;
    }
    char temp='a';
    if(jj!=-2 && v[ii][jj]==temp)
        temp++;
    for(int j=jj+2; j<m; j++){
        if(ii>0 && v[ii-1][j]==temp){
            if(temp=='z')
                temp='a';
            else temp++;
        }
        if(ii>0 && (j-1)>0 && v[ii][j-1]==temp){
            if(temp=='z')
                temp='a';
            else temp++;
        }
        if(ii>0 && (j-1)>0 && v[ii+1][j-1]==temp){
            if(temp=='z')
                temp='a';
            else temp++;
        }
        v[ii]+=temp; v[ii+1]+=temp;
        if(temp=='z')
            temp='a';
        else temp++;
    }
    for(int i=ii+2; i<n; i+=2){
        for(int j=0; j<m; j++){
            if(i>0 && v[i-1][j]==temp){
                if(temp=='z')
                    temp='a';
                else temp++;
            }
            v[i]+=temp; v[i+1]+=temp;
            if(temp=='z')
                temp='a';
            else temp++;
        }
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,m,k; cin>>n>>m>>k;
        if(n==1 && k==0)
            cout<<"NO"<<endl;
        else if(m==1 && k>0)
            cout<<"NO"<<endl;
        else if(m%2){
            int temp=n*(m-1)/2;
            if(k>temp || k%2)
                cout<<"NO"<<endl;
            else{
                vector<string> v(n, "");
                if(m>1)
                    fill(n,m-1,k,v);
                for(int i=0; i<n; i+=2){
                char temp='a';
                    if((m-2)>0 && v[i][m-2]==temp){
                        if(temp=='z')
                            temp='a';
                        else temp++;
                    }
                    if((m-2)>0 && v[i+1][m-2]==temp){
                        if(temp=='z')
                            temp='a';
                        else temp++;
                    }
                    if(i>0 && v[i-1][m-1]==temp){
                        if(temp=='z')
                            temp='a';
                        else temp++;
                    }
                    if((m-2)>0 && v[i][m-2]==temp){
                        if(temp=='z')
                            temp='a';
                        else temp++;
                    }
                    if((m-2)>0 && v[i+1][m-2]==temp){
                        if(temp=='z')
                            temp='a';
                        else temp++;
                    }
                    if(i>0 && v[i-1][m-1]==temp){
                        if(temp=='z')
                            temp='a';
                        else temp++;
                    }
                    v[i]+=temp; v[i+1]+=temp;
                }
                cout<<"YES"<<endl;
                for(int i=0; i<n; i++)
                    cout<<v[i]<<endl;
            }
        }
        else if(n%2){
            if(k<m/2 || (k-m/2)%2)
                cout<<"NO"<<endl;
            else{
                vector<string> v(n, "");
                if(n>1)
                    fill(n-1,m,k-m/2,v);
                for(int j=0; j<m; j+=2){
                    char temp='a';
                    if((n-2)>0 && v[n-2][j]==temp){
                        if(temp=='z')
                            temp='a';
                        else temp++;
                    }
                    if((n-2)>0 && v[n-2][j+1]==temp){
                        if(temp=='z')
                            temp='a';
                        else temp++;
                    }
                    if(j>0 && v[n-1][j-1]==temp){
                        if(temp=='z')
                            temp='a';
                        else temp++;
                    }
                    if((n-2)>0 && v[n-2][j]==temp){
                        if(temp=='z')
                            temp='a';
                        else temp++;
                    }
                    if((n-2)>0 && v[n-2][j+1]==temp){
                        if(temp=='z')
                            temp='a';
                        else temp++;
                    }
                    if(j>0 && v[n-1][j-1]==temp){
                        if(temp=='z')
                            temp='a';
                        else temp++;
                    }
                    v[n-1]+=temp; v[n-1]+=temp;
                }
                cout<<"YES"<<endl;
                for(int i=0; i<n; i++)
                    cout<<v[i]<<endl;
            }
        }
        else{
            if(k%2)
                cout<<"NO"<<endl;
            else{
                vector<string> v(n, "");
                fill(n,m,k,v);
                cout<<"YES"<<endl;
                for(int i=0; i<n; i++)
                    cout<<v[i]<<endl;
            }
        }
    }
    return 0;
}


/*
    
*/
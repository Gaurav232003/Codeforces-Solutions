#include<iostream>
using namespace std;

void solve(){
    string ss,t;cin>>ss>>t;
    int c=0;
    for(int i=0;i<t.length();i++){
        if(t[i]==ss[c]) c++; 
    }
    cout<<c+1;

}

int main(){
     solve();
}
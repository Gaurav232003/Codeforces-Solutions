#include<iostream>
using namespace std;

void solve(){
    string ss;cin>>ss;
    char c;cin>>c;
    int n=ss.length();
    if(n==1 && ss[0]==c){
        cout<<"YES"<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(ss[i]==c && i%2==0){
           
                cout<<"YES"<<endl;
                return;
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    int t;cin>>t;
    while(t--) solve();
}

#include<iostream>
using namespace std;

void solve(){
    int n;cin>>n;
    string ss;cin>>ss;

    if(n<=2){
        cout<<0<<endl;
        return;
    }
    // m a p i e
    int c=0;

    for(int i=0;i<n-2;i++){
        if((ss[i]=='m'&&ss[i+1]=='a'&&ss[i+2]=='p')){
            
            c++;
            i+=2;
        }
        else if(ss[i]=='p'&&ss[i+1]=='i'&&ss[i+2]=='e'){
            c++;
            i+=2;
        }
    }
    cout<<c<<endl;
}

int main(){
    int t;cin>>t;
    while(t--) solve();
}
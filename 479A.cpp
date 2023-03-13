#include<iostream>
using namespace std;

int main(){
    int a,b,c;cin>>a>>b>>c;
    if(a==1 && b==1 && c==1){
        cout<<3;
    }
    else if((a==1 &&b==1) || (b==1 && c==1)){
        cout<<max(max(a,b),c)*2;
    }
    else if(a==1 && c==1) cout<<b+2;
    else if(a==1){
        cout<<(a+b)*c;
    }
    else if(b==1){
        cout<<(min(a,c)+1)*max(a,c);
    }
    else if(c==1){
        cout<<a*(b+c);
    }
    else cout<<a*b*c;
}
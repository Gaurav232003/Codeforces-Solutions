#include<iostream>
using namespace std;

int main(){
    int a,b;cin>>a>>b;
    int f = (6-max(a,b)+1);
    if(f==6) cout<<"1/1";
    else if(f==5) cout<<"5/6";
    else if(f==4) cout<<"2/3";
    else if(f==3) cout<<"1/2";
    else if(f==2) cout<<"1/3";
    else cout<<"1/6";
}
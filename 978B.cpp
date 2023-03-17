#include<iostream>
#include <string>
using namespace std;

int main(){
    int n;cin>>n;
    string ss;cin>>ss;
    int c=0;
    if(ss.length()<3) cout<<0;
    else{
        for(int i=2;i<ss.length();i++){
            if(ss[i]=='x' && ss[i-1]=='x' && ss[i-2]=='x'){
                c++;
                ss.erase(i,1);
                i--;
            }
        }
        cout<<c;
    }
}
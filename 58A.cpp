#include<iostream>
using namespace std;

int main(){
    string ss;cin>>ss;
    string a = "hello";
    int c=0;
    for(int i=0;i<ss.length();i++){
        if(ss[i]==a[c]){
            c++;
            if(c==5){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
}
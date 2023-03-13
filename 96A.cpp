#include<iostream>
using namespace std;

int main(){
    string ss;cin>>ss;
    int c=1;
    for(int i=0;i<ss.length()-1;i++){
        if(ss[i]==ss[i+1]){
            c++;
            if(c==7) {
                cout<<"YES";
                return 0;
            }
            continue;
        }
        else c=1;
    }
    cout<<"NO";
}
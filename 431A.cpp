#include<iostream>
using namespace std;

int main(){
    int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    string ss;cin>>ss;
    int c=0;
    for(int i=0;i<ss.length();i++){
        c+= arr[(int)ss[i]-49];
    }
    cout<<c;
}



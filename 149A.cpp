#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;cin>>k;
    int arr[12];
    for(int i=0;i<12;i++) cin>>arr[i];
    sort(arr,arr+12);
    int c=0,s=0;
    for(int i=11;i>=0;i--){
        if(s>=k){
            cout<<c;
            return 0;
        }
        c++;
        s+=arr[i];
    }
    if(s>=k) cout<<c;
    else
    cout<<-1;
}
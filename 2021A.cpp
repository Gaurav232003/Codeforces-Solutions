#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    int arr;

    for(int i=0;i<n;i++){
        int temp;cin>>temp;
        arr.push_back(temp);
    }

    sort(arr.begin(),arr.end());


    while(arr.size()!=1){
        if(arr.size()==2){
            int tt = (arr[0]+arr[1])/2;
            cout<<tt<<endl;
            return;
        }
        int avg = (arr[0]+arr[1])/2;
        arr.erase(arr.begin());
        arr.erase(arr.begin());

        for(int i=0;i<arr.size();i++){
            if(arr[i]>=avg){
                arr.insert(arr.begin()+i,avg);
                break;
            }
            if(i==arr.size()-1){
                arr.push_back(avg);
            }
        }
    }
}

int main(){
    int t;cin>>t;
    while(t--) solve();
}
#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int s=0,e=n-1,p=0,q=0;
    for(int i=0;i<n;i++){
        if(arr[s]>arr[e]){
            if(i%2==0) p+=arr[s];
            else q+=arr[s];
            s++;
        }
        else{
             if(i%2==0) p+=arr[e];
            else q+=arr[e];
            e--;
        }
    }
    cout<<p<<" "<<q;
}
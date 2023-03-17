#include<iostream>
#include<vector>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    int a=0,b=0,c=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==1) {
            a++;
            v1.push_back(i+1);
        }
        if(x==2) {
            b++;
            v2.push_back(i+1);
        }
        if(x==3) {
            c++;
            v3.push_back(i+1);
        }
    }
    if(a==0 || b==0 ||c==0) cout<<0;
    else{
        cout<<min(min(a,b),c)<<endl;
        for(int i=0;i<min(a,min(b,c));i++){
            cout<<v1.at(i)<<" "<<v2.at(i)<<" "<<v3.at(i)<<endl;
        }
    }
}
int main(){
    solve();
}
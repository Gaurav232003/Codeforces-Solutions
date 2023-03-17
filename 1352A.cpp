#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

void solve(){
    int ss;cin>>ss;
    vector<int> v;
    int c=0;
    while(ss>0){
        if(ss%10!=0) {
            v.push_back((ss%10)*pow(10,c));
        }
        ss/=10;
        c++;
    }
    cout<<v.size()<<endl;
     for(int i=0; i < v.size(); i++)
   std::cout << v.at(i) << ' ';
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}
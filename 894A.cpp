#include <iostream>
using namespace std;
int main(){
string s;
cin >> s;
int q = 0, qa = 0 ,qaq =0;
for(int i = 0;i < s.size();i++){
	if(s[i] == 'Q'){
		q++;
		qaq += qa;
	}else if(s[i] == 'A'){
		qa += q;
	}
}
cout << qaq <<endl;
}
 
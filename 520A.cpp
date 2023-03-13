#include <bits/stdc++.h>
using namespace std;
set<char> s;
int main() {
    
	int n;
	char c;
	cin >> n;
	while (n--) {
		cin >> c;
		s.insert(tolower(c));
	}
	s.size() == 26 ? cout << "YES" : cout << "NO";
}
#include <iostream>
#include <string>
using namespace std;
string shift(string s, int k) {
	for (int i = 0; i < (int)s.length(); i++) {
		int val = s[i] - 'a';
		val = (val + k) % 26;
		s[i] = 'a' + val;
	}
	return s;
}
string func(string input_string, int n) {
	string res;
	string alphabet { "abcdefghijklmnopqrstuvwxyz" };
	for (int i = 0; i < input_string.length(); i++) {
		for (int j = 0; j < alphabet.length(); j++) {
			if (input_string[i] == alphabet[j]) {
				res += alphabet[(j + n) % alphabet.length()];
			}
		}

	}
	return res;
}




int main() {
	string s;
	int k;
	cout << "Enter the stringa and the number of moves: ";
	cin >> s >> k;
	cout << s << ": " << shift(s, k) << endl;
	cout << s << ": " << func(s, k) << endl;
	
	
	
	/*string s;
	cin >> s; */
	/*if ('A' <= int(s[0]) && int(s[0]) <= 'Z') {
		cout << "uppercase" << endl;
	}
	else {
		cout << "bad";
	}*/

	/*string s = "prikola";
	for (char c : s) {
		int x = c - 'a';
		cout << x << " ";
	}
	cout << endl;*/
	
	/*string s = "6abc";
	int x = s[0] - '0';
	cout << x * x << endl;*/
}


#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int temp = 1, max = 1;
	
	for (int i = 0; i < s.length()-1; i++){
		cout << "test";
		if (s[i] == s[i+1]){
			temp++;
			if (temp > max) {
				max = temp;
			}
		}
		else {
			temp = 1;
		}
	}
	cout << max;
}

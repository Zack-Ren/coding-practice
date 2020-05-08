#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool matching_brackets(string str){
	stack<char> s;
	char x;

	for(int i = 0; i < str.length(); i++){		
		if (str[i] == '(' || str[i] == '{' || str[i] == '['){
			s.push(str[i]);
		}
		
		if (s.empty()){
			return false;
		}

		switch (str[i]){
			case ')':
				x = s.top();
				s.pop();
				if(x == '{' || x == '[') {
					return false;
				}
				break;

			case '}':
				x = s.top();
				s.pop();
				if(x == '(' || x == '['){
					return false;
				}
				break;

			case ']':
				x = s.top();
				s.pop();
				if(x == '(' || x == '{'){
					return false;
				}
				break;
		}
	}
	return(s.empty());
}

int main(){
	string s = "({})[]}";
	cout << "Input: " << s << "\n";
	if (matching_brackets(s)){
		cout << "Balanced\n";
	} else {
		cout << "Not balanced\n";
	}
}

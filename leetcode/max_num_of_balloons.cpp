#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxNumberOfBalloons(string text){
	unordered_map<char, int> m;
	for (char i : text){
		m[i] ++;
	}
	return min(m['b'], min(m['a'], min(m['l']/2, min(m['o']/2, m['n']))));
}

int main(){
	string text = "loonbalxballpoon";

	int i = maxNumberOfBalloons(text);

	cout << i;
}
